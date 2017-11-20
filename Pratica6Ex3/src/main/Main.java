package main;

public class Main {

	public static void main(String[] args) {
		int n = 5;
		System.out.println(fatorial(n));
	}
	
	public static long fatorial(int n){
		int fat = 1;
		if(n>1)
			fat *= fatorial(n-1);
		return fat*n;
	}	
}
