Pairs in an Array
[2,3,6,8,10]
 Eg:- (2,3) (2,6)(2,8)(2,10)
  (4,6)(4,8)(4,10)
  (6,8)(6,10)

import java.util.*;
public class Main
{
    public static void printpairs(int num[]){
        int tp=0;
        for(int i =0;i<num.length;i++){
            int curr = num[i];
            for(int j=i+1;j<num.length;j++){
                System.out.print("(" + curr + "," + num[j] + ")");
                tp++;
            } 
        }
        System.out.println("total pairs ="+tp);
    }
    
	public static void main(String[] args) {
	    int num[] = {1,2,3,4,5,6};
	    printpairs(num);
	    
    }
}
