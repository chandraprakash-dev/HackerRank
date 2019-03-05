#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
    if (Fireball* f = dynamic_cast<Fireball*>(spell))  f -> revealFirepower();
    else if (Frostbite* fr = dynamic_cast<Frostbite*>(spell))  fr -> revealFrostpower();
    else if (Waterbolt* w = dynamic_cast<Waterbolt*>(spell))  w -> revealWaterpower();
    else if (Thunderstorm* t = dynamic_cast<Thunderstorm*>(spell))  t -> revealThunderpower();
    else {
        string x =  spell -> revealScrollName();
        int m = x.length();
        string y = SpellJournal::journal;
        int n = y.length();
        int array[m + 1][n + 1];
        for (int i = 0; i <= m; i++) array[i][0] = 0;
        for (int j = 0; j <= n; j++) array[0][j] = 0;
        for (int i = 1; i <= m; i++) 
            for (int j = 1; j <= n; j++) {
                if (x[i - 1] == y[j - 1])
                    array[i][j] = array[i - 1][j - 1] + 1;
                else
                    array[i][j] = array[i][j - 1] > array[i - 1][j] ? array[i][j - 1] : array[i - 1][j];
            }

        cout << array[m][n] << endl;
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
