package produto;

public class Fogao extends Produto {


	public Fogao(int ID, double valor,int numEstoque){
		this.ID = ID;
		this.numEstoque = numEstoque;
		this.valor = valor;
	}
	
	@Override
	public int getID() {
		return ID;
	}
	@Override
	public int getNumEstoque() {
		return numEstoque;
	}

	@Override
	public double getValor() {
		return valor;
	}
}
