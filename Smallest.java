import java.util.*;
public class Main
{
    public static int getsmallest(int num[]){
        int smallest = Integer.MAX_VALUE;
        int n = num.length;
        for(int i=0;i<n;i++){
            if(smallest>num[i]){
                smallest = num[i];
            }
        }
        return smallest;
    }
	public static void main(String[] args) {
	    int num[] = {1,2,3,4,5,6};
		System.out.println(" smallest number is " +  getsmallest(num));
	}
}
