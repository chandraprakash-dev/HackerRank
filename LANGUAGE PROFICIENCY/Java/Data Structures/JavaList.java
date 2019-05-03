import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        LinkedList list = new LinkedList();
        int n = sc.nextInt();
        for(int i = 0; i < n; i ++) {
            list.add(sc.nextInt());
        }
        int q = sc.nextInt();
        while(q-- > 0) {
            String s = sc.next();
            if(s.equals("Insert")) {
                int index = sc.nextInt();
                int value = sc.nextInt();
                list.add(index, value);
            } else {
                int value = sc.nextInt();
                list.remove(value);
            }
        }
        Iterator iterator = list.iterator();
        while(iterator.hasNext()) {
            System.out.print(iterator.next() + " ");
        }
    }
}


