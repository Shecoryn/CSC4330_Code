
public class Final_Q5 {

	public static void main(String[] args) {
		int[][] x = { {2,7,9},{3,6,1},{7,4,2} };
		int n = 8;
		noGoto(n,x);
	}
	public static void noGoto(int n, int [][] x) {
		boolean a = false;
	    int i,j;
	    for(i = 0; i < n; i++)
	    {
	        int count = 0;
	        for(j = 0; j < n; j++)
	        {
	            if(x[i][j] == 0)
	                count++;
	        }
	        if(a == false && count == n)
	        {
	            System.out.println("First all zero row is: " + i);
	            a = true;
	        }
	    }
	}

}
