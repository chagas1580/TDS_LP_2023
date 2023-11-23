float preco;
int desconto;
string pag;
string produto;
Console.WriteLine("escolha seu produto:\n vassoura \n cerveja \n suco \n refrigerante \n carro ");
produto = Console.ReadLine(); 
if (produto == "cerveja")
{
    Console.WriteLine("o preco da gelada é 5 pila");

}
Console.WriteLine("escolha a forma de pagamento:");
pag = Console.ReadLine();
if (pag== "pix")
{
    Console.WriteLine("te faco por 2 pila");
}