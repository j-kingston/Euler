//Find the sum of all multiples of 3 or 5 below 1000

public class multiples {
	
	public static void main(String args[]){
		int x = 0, sum = 0;
		while(x < 1000) {
			if(x % 15 == 0) {
				sum += x;
				x++;
			}
			else if(x % 3 == 0) {
				sum += x;
				x++;
			}
			else if(x % 5 == 0) {
				sum += x;
				x++;
			}
			else {
				x++;
			}
		}
		System.out.print(sum);
	}
}
	

