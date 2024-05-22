package classes;
public class Package4
{
	public String decoration = "Medium-High Range Decoration(Including Stage,Flowers,Lighting and pandal)";
	public String foodItem = "**Coffee at Reception**Polao,Roast,Kabab,Mutton,Beef,Borhani,Jorda,Coke/Sprite/Fanta";
	public String venue = "Medium-High---Capacity = 700 People ";
	
	public int package4Cost = 220000;
	public Package4(){}
	public void showPackageInfo(){
		System.out.println("\t\t\tDecoration = "+decoration);
		System.out.println("\t\t\tFood Item = "+foodItem);
		System.out.println("\t\t\tVenue = "+venue);
		System.out.println("\t\t\tTotal Cost : "+package4Cost);
		System.out.println(" ");
	}
}