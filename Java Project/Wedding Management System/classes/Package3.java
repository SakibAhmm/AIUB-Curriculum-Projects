package classes;
public class Package3
{
	public String decoration = "Medium Decoration (Including Flowers and Lighting)";
	public String foodItem = "**Polao,Roast,Mutton,Beef,Finni,Borhani,Coke/Sprite/Fanta";
	public String venue = "Medium---Capacity = 500 People";
	
	public int package3Cost = 165000;
	public Package3(){}
	public void showPackageInfo(){
		System.out.println("\t\t\tDecoration = "+decoration);
		System.out.println("\t\t\tFood Item = "+foodItem);
		System.out.println("\t\t\tVenue = "+venue);
		System.out.println("\t\t\tTotal Cost : "+package3Cost);
		System.out.println(" ");
	}
}