{-2,-3,4,-1,-2,1,5,-3}
0  cs|0|0|4|3|1|2|4|7
-∞ Ms|0|0|4||4|4|4|7|7
public class Main
{
    public static void kedanes(int numbers[]){
        int cs=0;
        int ms=Integer.MIN_VALUE;
        for(int i=0;i<numbers.length;i++){
            cs=cs+numbers[i];
            if(cs<0){
                cs=0;
            }
            ms=Math.max(cs,ms);

        }
        System.out.println("our max subarray sum is: " +ms);
    }
	public static void main(String[] args) {
	    int numbers[] ={-2,-3,4,-1,-2,1,5,-3};
	    kedanes(numbers);
	}
}
