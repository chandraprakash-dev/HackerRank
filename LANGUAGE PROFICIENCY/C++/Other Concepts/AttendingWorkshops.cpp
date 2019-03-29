#include<bits/stdc++.h>

using namespace std;
struct Workshops {
    int start_time;
    int duration;
    int end_time; 
};

struct Available_Workshops {
    int n;
    vector <Workshops> w;
};

Available_Workshops *initialize(int *start_time, int *duration, int n) {
    Available_Workshops *tmp = new(Available_Workshops);
    Workshops ws;
    
    tmp -> n = n;
    for (int i=0;i<n;i++) {
        ws.start_time = start_time[i];
        ws.duration = duration[i];
        ws.end_time = start_time[i]+duration[i];
        tmp -> w.push_back(ws);   
    }

    return tmp;    
}

bool compare(Workshops w1, Workshops w2) { 
    return (w1.end_time < w2.end_time); 
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    // sort workshops by end_time
    sort(ptr->w.begin(),ptr->w.end(),compare); 
    
    // interval scheduling
    int last_processed_time=-1;
    int maxWorkshops=0;
    for (int i=0;i<ptr->n;i++) {
        if (ptr->w[i].start_time >= last_processed_time) {
            last_processed_time=ptr->w[i].end_time;
            maxWorkshops++;
        }
    }

    return maxWorkshops;
}
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

