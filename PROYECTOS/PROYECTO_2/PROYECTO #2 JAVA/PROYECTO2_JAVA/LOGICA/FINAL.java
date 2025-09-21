import java.util.Scanner;

public class FINAL {
	static Double ecu1[] = new Double[4];
	static Double ecu2[] = new Double[4];
	static Double ecu3[] = new Double[4];

	public static void main(String[] args) {
		Scanner data = new Scanner(System.in);
		int select = 0;
		int i=0;
		
		System.out.println("\t\tMETODOS NUMERICOS PROYECTO #2\n");
		
		System.out.println("Ingrese los coeficientes de la ecuacion #1\n");
		for(i=0 ; i<4 ; i++) {
			try {
			System.out.println("Coefieciente #"+(i+1)+":\n");
			ecu1[i]=data.nextDouble();
			}
			
			catch(Exception n1) {
				System.out.println("Dato no valido\n");
			}
			
		}
		
		System.out.println("Ingrese los coeficientes de la ecuacion #2\n");
		for(i=0; i<4; i++) {
			
			try {
			System.out.println("Coefieciente #"+(i+1)+":\n");
			ecu2[i]=data.nextDouble();
			}
			catch(Exception n2) {
				System.out.println("Dato no valido\n");
			}
			
		}
		
		System.out.println("Ingrese los coeficientes de la ecuacion #3\n");
		for(i=0; i<4; i++) {
			try {
			System.out.println("Coefieciente #"+(i+1)+":\n");
			ecu3[i]=data.nextDouble();
			}
			catch(Exception n3) {
				System.out.println("Dato no valido \n");
			}
			
		}
		
		System.out.println("\t\tMATRIZ INSERTADA\n");
		for(i=0 ; i<4; i++) {
			
			System.out.print(ecu1[i]+ "\t");
			
		}
		System.out.println("\n");
		
		for(i=0; i<4; i++) {
			
			System.out.print(ecu2[i] + "\t");
		}
		System.out.println("\n");
		
		for(i=0; i<4; i++) {
			
			System.out.print(ecu3[i]+ "\t");
		}
		System.out.println("\n");
			
			
			
			
			
		
		do {
			System.out.println("\t\t\tMETODOS NUMERICOS PROYECTO #2\n");
			System.out.println("1. GAUSS");
			System.out.println("2. GAUSS-JORDAN");
			System.out.println("3. JACOBI");
			System.out.println("4. GAUSS-SEIDEL");
			System.out.println("5. SALIR\n");
			try {
				System.out.println("Seleccione una opcion [1-5]:\n");
				select = data.nextInt();
			} catch (Exception e) {
				System.out.println("Seleccion no valida\n");
				break;
			}

			if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5) {
				System.out.println("Opcion fuera de rango favor verifique\n");
			} else {
				resul(select);
			}
		} while (select != 5);

	}

	public static void resul(int r) {

		switch (r) {

		case 1:
			System.out.println("\t\tRESOLUCION POR METODO DE GAUSS\n");
			gauss(ecu1,ecu2,ecu3);
			break;
		case 2:
			System.out.println("\t\tRESOLUCION POR METODO DE GAUSS-JORDAN\n");
			break;
		case 3:
			System.out.println("\t\tRESOLUCION POR METODO DE JACOBI\n");
			break;

		case 4:
			System.out.println("\t\tRESOLUCION POR METODO DE GAUSS-SEIDEL\n");
			break;

		case 5:
			System.out.println("\t\tGracias por utilizar el programa \n");
			System.exit(0);

		default:
			System.out.println("...");

		}

	}

	public static void gauss(Double f1[], Double f2[], Double f3[]) {
		Double aux1=0.0;
		
		int i=0;
		
		if((f2[0]-f1[0])!=0) {
			
			 aux1 = f1[0];
			
			do {
				aux1 = aux1+1;
				
				
			}while((f2[0]-aux1)!=0);
			
			
			
			System.out.println("F2 = F2 -"+aux1 +"F1");
			for(i=0;i<4;i++) {
				System.out.print(f2[i]+"\t");
			}
			System.out.println("");
			
			for(i=0;i<4;i++) {
				System.out.print(-aux1*f1[i]+ "\t");
			}
			System.out.println("");
			
            for(i=0; i<4; i++) {
				
			   f2[i]=f2[i]-aux1*f1[i];
				
			}
            for(i=0; i<4; i++) {
            	System.out.print(f2[i] + "\t");
            }
            System.out.println("");
			
			
		}
		

	}

	public static void jordan() {

	}

	public static void jacobi() {

	}

	public static void seidel() {

	}

}
