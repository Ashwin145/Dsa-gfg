import java.util.*;
public class Main
{
    public static int getlargest(int num[]){
        int largest = Integer.MIN_VALUE;
        int n = num.length;
        for(int i=0;i<n;i++){
            if(largest<num[i]){
                largest = num[i];
            }
        }
        return largest;
    }
	public static void main(String[] args) {
	    int num[] = {1,2,3,4,5,6};
		System.out.println(" largest number is " +  getlargest(num));
	}
}
