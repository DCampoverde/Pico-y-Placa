
public class Mensaje {
	
	public void Validar (int num, int dia, int hora) {
		if ((hora>700 && hora<930) || (hora>1600 && hora<1930)) {
			if (dia==1) {
				if (num==1 || num==2) {
					System.out.println("El vehiculo no puede transitar");
				}
				else {
					System.out.println("El vehiculo si puede transitar");
				}
			}
			else if (dia==2) {
				if (num==3 || num==4) {
					System.out.println("El vehiculo no puede transitar");
				}
				else {
					System.out.println("El vehiculo si puede transitar");
				}
			}
			else if (dia==3) {
				if (num==5 || num==6) {
					System.out.println("El vehiculo no puede transitar");
				}
				else {
					System.out.println("El vehiculo si puede transitar");
				}
			}
			else if (dia==4) {
				if (num==7 || num==8) {
					System.out.println("El vehiculo no puede transitar");
				}
				else {
					System.out.println("El vehiculo si puede transitar");
				}
			}
			else if (dia==5) {
				if (num==9 || num==0) {
					System.out.println("El vehiculo no puede transitar");
				}
				else {
					System.out.println("El vehiculo si puede transitar");
				}
			}
			else if (dia==6 || dia==7) {
					System.out.println("El vehiculo si puede transitar");
				}
		}
		else {
			System.out.println("El vehiculo si puede transitar");
		}
	}
}
