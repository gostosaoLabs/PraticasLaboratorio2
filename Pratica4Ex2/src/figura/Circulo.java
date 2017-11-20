package figura;

public class Circulo extends Figura{
	double raio;
	
	  public Circulo() {
	}

	public Circulo(double raio) {
		this.raio = raio;
	}

	@Override
	public double getArea() {
			return 3.14*raio*raio;
		  }

	public double getRaio() {
		return raio;
	}

	public void setRaio(double raio) {
		this.raio = raio;
	}

}
