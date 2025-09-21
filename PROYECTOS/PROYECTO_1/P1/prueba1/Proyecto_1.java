import java.util.Scanner;
public class Proyecto_1 {
	
	static int min=0;
	static int sus=0;
	static int mod1=0;
	static int mod2=0;
	static String bi_min="";
	static String bi_sus="";
	static String bi_res="";
	static String bi_resll="";
	static String bi_suma="";
	static String bi_sumall="";
	static int aux1=0;
	static int aux2=0;

	public static void main(String[] args) {
		
		Scanner data = new Scanner(System.in);
		int op=0,l1=0,l2=0,c1=0,c2=0;
		do {
		do {
		System.out.println("Ingrese el valor decimal del minuendo: ");
		min=data.nextInt();
		}while(min<0);
		
		do {
		System.out.println("Ingrese el valor decimal del sustraendo: ");
		sus=data.nextInt();
		}while(sus<0);
		}while(sus>min);
		aux1=min;
		aux2=sus;
		
		while(min>0) {
			mod1= (min%2);
			bi_min = mod1 + bi_min;
			min=min/2;
			
			
		}
		
		while(sus>0) {
			mod2 = (sus%2);
			bi_sus = mod2 + bi_sus;
			sus=sus/2;
			
			
			
		}
		if(bi_sus.length()<bi_min.length())  {
			bi_sus= '0'+bi_sus;
		}
		
		System.out.println("Minuendo = \t" +bi_min);
		
		
		System.out.println("Sustraendo = \t"+bi_sus);
		
		do {
		System.out.println("\t\tMETODOS NUMERICOS PARA INGENIEROS\n");
		System.out.println("\t\tProyecto #1 -- Joy Nelaton 8-902-1282\n");
		System.out.println("1. COMPLEMENTO A1");
		System.out.println("2. COMPLEMENTO A2");
		System.out.println("3. COMPLEMENTO A9");
		System.out.println("4. COMPLEMENTO A10");
		System.out.println("5. SALIR");
		System.out.println("Seleccione una opcion [1-5]: ");
		op=data.nextInt();
		
		switch (op) {
		
		case 1:
			l1=bi_min.length();
			l2=bi_sus.length();
			for(c1=(l1-1); c1>0; c1--) {
				bi_min.charAt(c1);
				bi_sus.charAt(c1);
				
				
				if(bi_min.charAt(c1)=='0' && bi_sus.charAt(c1)=='0') {
					bi_res = bi_res + '0';
				}
				else if(bi_min.charAt(c1)=='1' && bi_sus.charAt(c1)=='1') {
					bi_res = bi_res + '0';
				}
				else if(bi_min.charAt(c1)=='1' && bi_sus.charAt(c1)=='0') {
					bi_res = bi_res +'1';
				}
				else if(bi_min.charAt(c1)=='0' && bi_sus.charAt(c1)=='1') {
					bi_res = bi_res + '1';
					for(c2=c1; c2>0;c2--) {
						if(bi_min.charAt(c2)=='0') {
							bi_min.replace('0', '1');
							
						}
						
						
						if(bi_min.charAt(c2)=='1') {
							bi_min.replace('1', '0');
							break;
							
							
						}
						
						
					}
				}
				
				
				
			}
			
			System.out.println("\t\tResta Binaria");
			System.out.println("Minuendo \t" +bi_min);
			
			System.out.println("Sustraendo \t"+bi_sus);
			if(bi_res.length()<bi_sus.length()) {
				bi_res=bi_res + '0';
			}
			for(int au=(bi_res.length()-1); au>=0; au--) {
				bi_resll =bi_resll + bi_res.charAt(au);
				
			}
			System.out.println("Resta     \t" +bi_resll);
			
			
		
			
			
			break;
			
		case 2:
			break;
			
		case 3:
			break;
			
		case 4: 
			break;
		
		case 5:
			System.out.println("Gracias por utilizar el programa\n");
			System.exit(0);
			
		default:
			System.out.println("OPCION FUERA DE RANGO\n");
		
			
		
		
		
		
		
		
		
		
		
		
		
		
		}
		}while(op!=5);
		
		
		

	}
	
	
}
