
public class Placa {
	private String placa;
	private int Lenght;
	private int Last_num;


	public void setPlaca (String placa) {
		this.placa = placa;
	}
	
	public void setLenght () {
		this.Lenght = placa.length();
	}
	
	public void setLast_Num () {
		this.Last_num = Character.getNumericValue(placa.charAt(this.Lenght-1));
	}
	
	public int getLast_Num () {
		return Last_num;
	}

}

