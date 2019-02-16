import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine().trim();
        scan.close();
        
        String [ ] tokens = s.split("[^\\p{Alpha}]+");
        int size = s.isEmpty() ? 0 : tokens.length;
        
        System.out.println(size);
        for(String token : tokens ) {
            System.out.println(token);
        }
    }
}


