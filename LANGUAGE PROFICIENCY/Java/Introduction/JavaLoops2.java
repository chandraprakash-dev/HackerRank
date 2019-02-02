import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            for(int j = 0; j < n; j ++) {
                a += b;
                
                System.out.print(a);
                System.out.print(" ");

                b *= 2;
            }
            System.out.print("\n");
        }
        in.close();
    }
}

