package inicio;
import produto.*;

public class Principal {
	
	public static void main(String[]args) {
		int i, j;
		Produto[][] matriz=new Produto[3][3];
		
		matriz[0][0]=new Armario(01,10,2000);
		matriz[0][1]=new Mesa(02,20,1500);
		matriz[0][2]=new Cadeira(03,40,200);
		matriz[1][0]=new Fogao(04,15,999);
		matriz[1][1]=new Refrigerador(05,5,1890);
		for (i=0;i<3;i++)
			for (j=0;j<3;j++){
				if(matriz[i][j]!=null)
				System.out.println("ID: " + matriz[i][j].getID()
						+" Numero em estoque:" + matriz[i][j].getNumEstoque() 
						+" Valor:" + matriz[i][j].getValor());
		}
		double soma = matriz[0][1].getValor() + matriz[0][2].getValor() + matriz[1][0].getValor() + matriz[1][1].getValor();
		System.out.println("Soma dos valores:" + soma );
	}
}
