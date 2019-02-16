import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String substring = s.substring(0, k);
        String smallest = substring;
        String largest = substring;

        int n = s.length() - k + 1;

        for(int i = 1; i < n; i ++) {
            substring = s.substring(i, i + k);
            smallest = substring.compareTo(smallest) < 0 ? substring : smallest;
            largest = substring.compareTo(largest) > 0 ? substring : largest;
        }
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
