package figura;

public class Trapezio extends Figura{
	double baseMaior, baseMenor, altura;
	
	public Trapezio(){
	}
	public Trapezio(double baseMaior, double baseMenor, double altura){
		this.baseMaior = baseMaior;
		this.baseMenor = baseMenor;
		this.altura = altura;
	}
	@Override
	public double getArea(){
		return ((baseMenor+baseMaior)*altura)/2;
	}
	public double getBaseMaior() {
		return baseMaior;
	}

	public void setBaseMaior(double baseMaior) {
		this.baseMaior = baseMaior;
	}

	public double getBaseMenor() {
		return baseMenor;
	}

	public void setBaseMenor(double baseMenor) {
		this.baseMenor = baseMenor;
	}

	public double getAltura() {
		return altura;
	}

	public void setAltura(double altura) {
		this.altura = altura;
	}
	
}
