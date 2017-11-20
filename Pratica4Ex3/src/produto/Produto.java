package produto;

public class Produto {
	int ID;
	int numEstoque;
	double valor;
	double valorTotal;
	
	public int getID() {
		return ID;
	}
	public void setID(int iD) {
		ID = iD;
	}
	public int getNumEstoque() {
		return numEstoque;
	}
	public void setNumEstoque(int numEstoque) {
		this.numEstoque = numEstoque;
	}
	public double getValor() {
		return valor;
	}
	public void setValor(double valor) {
		this.valor = valor;
	}
	public double getValorTotal() {
		return valorTotal;
	}
	public void setValorTotal(double valorTotal) {
		this.valorTotal = valorTotal;
	}
	
}
