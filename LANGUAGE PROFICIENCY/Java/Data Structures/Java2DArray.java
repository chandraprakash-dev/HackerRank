import java.util.*;
import java.io.*;

class Solution{
	public static void main(String []argh){
		 int[][] arr = new int[10][10];
		 Scanner sc = new Scanner(System.in);
		 for(int i=0;i<6;i++){
			 for(int j=0;j<6;j++){
				 arr[i][j]=sc.nextInt();

			 }
		 }
		 int maxi=-100000;
		 for(int i=0;i<6;i++){
			 for(int j=0;j<6;j++){
				 if(i<=3 && j<=3){
					 int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+(arr[i+1][j+1])+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
					 if(sum>maxi) maxi=sum;
				 }
			 }
		 }
		 System.out.println(maxi);
	}
}
