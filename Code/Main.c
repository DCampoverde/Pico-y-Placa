/**************************************************************************
 * Proyect Name: PICO Y PLACA											  *
 * Author: DANIEL CAMPOVERDE											  *
 * Description: This program verifies if a vehicle is able to be		  *
 * on the road or not following the rules below:						  *
 *	- Cars with restriction can not be on the road						  *
 * 	- Restrictions apply only from 07:00 to 9:30 and 16:00 to 19:30		  *
 * 	- Restrictions are based on the last digit of the license plate		  *
 * 			> Monday:    License Plates ending in 1 or 2				  *
 * 			> Tuesday: 	 License Plates ending in 3 or 4				  *
 * 			> Wednesday: License Plates ending in 5 or 6				  *
 *  		> Thursday:  License Plates ending in 7 or 8				  *
 *      	> Friday:    License Plates ending in 9 or 0				  *
 * 	- Restrictions do no apply on Saturday nor Sunday					  *
 * Language: Español													  *
 *																		  *
 * ************************************************************************
 */


import java.util.Scanner; //for reading inputs
public class Main {

	public static void main(String[] args) {
		
/* CREATING OBJECTS FROM CLASS   */
		Placa placa1 = new Placa (); //create object "Placa"
		Dia   day   = new Dia ();	 //create object "Dia"
		Hora Time = new Hora();		 //create object "Hora"
		Mensaje msg = new Mensaje(); //create object "Mensaje"
		Scanner text = new Scanner (System.in);

/* 			VARIABLES		  */
		String ing_dia = "";
		int num = 0;
		int dia = 0;
		int hora =0;

/*  MAIN PROGRAM			  */
		System.out.println("Ingrese la placa del vehiculo: ");
		placa1.setPlaca(text.nextLine()); //Input License Plate
		placa1.setLenght();  //Gets length of License Plate
		placa1.setLast_Num(); //Gets last number of License Plate
		while (day.isNotValid(ing_dia)) {  //waits for correct Input (LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO)
			System.out.println("Ingrese el día de la semana: ");
			ing_dia = text.nextLine(); //Input Day
			if (day.isNotValid(ing_dia)) {
				System.out.println("No existe ese dia, intente de nuevo"); //In case day doesn't exists
			}
		}
		
		day.setDia(ing_dia); //Sets day from input
		day.setNum_Dia(); //Converts day to a number assigned
		System.out.println("Ingrese la hora (EJ: 05:10, 14:30): ");
		Time.Convert(text.nextLine()); //Input Time of the day
		
		num = placa1.getLast_Num();
		dia = day.getNum();
		hora= Time.getHora();
		
		msg.Validar(num,dia,hora); //Shows message according from the input
	}
}
