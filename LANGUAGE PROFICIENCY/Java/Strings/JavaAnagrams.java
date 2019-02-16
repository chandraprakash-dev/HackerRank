import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        if(a.length() != b.length()) 
            return false;
        
        a = a.toLowerCase();
        b = b.toLowerCase();
        
        int [] frequency = new int [26];
        
        for(char c: a.toCharArray()) {
            frequency[c-97]++;
        }
        for(char c: b.toCharArray()) {
            frequency[c-97]--;
        }

        for (int i : frequency) {
            if(i != 0) return false;
        }
        
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
