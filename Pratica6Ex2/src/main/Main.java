package main;

public class Main {

	public static void main(String[] args) {
		int n = 4;
		System.out.println(fatorial(n));
	}
	
	public static long fatorial(int n){
		if(n<0) return 0;
		if(n == 0) return 1;
		else return n*fatorial(n-1);
	}
}
