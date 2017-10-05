
public class Dia {
	private String dia;
	private int num_dia;
	private boolean valido;
	
	
	public void setDia (String dia) {
		this.dia = dia;
	}
	
	public boolean isNotValid (String dia) {
		if (dia.equalsIgnoreCase("LUNES")|| dia.equalsIgnoreCase("MARTES")|| dia.equalsIgnoreCase("MIERCOLES")|| dia.equalsIgnoreCase("JUEVES")|| dia.equalsIgnoreCase("VIERNES")|| dia.equalsIgnoreCase("SABADO")|| dia.equalsIgnoreCase("DOMINGO")) {
			return false;
		}
		else return true;
	}

	public String getDia() {
		return this.dia;
	}
	
	public void setNum_Dia () {
		if (this.dia.equalsIgnoreCase("LUNES")) {
			this.num_dia = 1;
		}
		if (this.dia.equalsIgnoreCase("MARTES")) {
			this.num_dia = 2;
		}
		if (this.dia.equalsIgnoreCase("MIERCOLES")) {
			this.num_dia = 3;
		}
		if (this.dia.equalsIgnoreCase("JUEVES")) {
			this.num_dia = 4;
		}
		if (this.dia.equalsIgnoreCase("VIERNES")) {
			this.num_dia = 5;
		}
		if (this.dia.equalsIgnoreCase("SABADO")) {
			this.num_dia = 6;
		}
		if (this.dia.equalsIgnoreCase("DOMINGO")) {
			this.num_dia = 7;
		}
	}
  
	public int getNum () {
		return this.num_dia;
	}
}
