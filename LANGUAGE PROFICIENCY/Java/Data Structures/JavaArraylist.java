import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        ArrayList [ ] list = new ArrayList[l];

        for(int i = 0; i < l; i ++) {
            int n = sc.nextInt();
            list[i] = new ArrayList();
            while(n -- > 0) {
                list[i].add(sc.nextInt());
            }
        }

        int q = sc.nextInt();
        while(q -- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            try {
                System.out.println(list[x - 1].get(y - 1));
            } catch (Exception e) {
                System.out.println("ERROR!");
            }
        }

    }
}


