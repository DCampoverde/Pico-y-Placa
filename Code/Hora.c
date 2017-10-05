import java.util.Scanner;

public class Hora {
	private int hora;
	
	
	public int getHora () {
		return this.hora;
	}

	public void Convert(String line) {
		String tiempo;
		tiempo = line.substring(0,2).concat(line.substring(3,5));
		this.hora = Integer.parseInt(tiempo);
	}
	
}
