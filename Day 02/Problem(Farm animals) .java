import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner read = new Scanner(System.in);
		
		int t = read.nextInt();
		for(int i=0; i<t; i++)
		{
    		int x = read.nextInt();
    		int y = read.nextInt();
    		int z = read.nextInt();
    		// Update your program below this line to solve the problem
    		if((z%x==0)&&(z%y==0)){
    		   System.out.println("ANY");
    		   continue;
    		}
    	
    		if(z%x==0){
    		     System.out.println("CHICKEN");
    		     continue;
    		}
    				if(z%y==0){
    		     System.out.println("DUCK");
    		     continue;
    		}
    			else{
    		    System.out.println("NONE");
    		    continue;
    		    
    		}

		}
	}
}
