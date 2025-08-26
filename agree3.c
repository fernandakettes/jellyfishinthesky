#include <cs50.h>
#include <stdio.h>

int main(void)

{

    while (true)

    {
        char c = get_char("Press 'y' to accept or 'n' to decline: ");
        if (c == 'y' || c == 'Y')
        {
            printf("You agreed to our terms of service!\n");
        }
        else if (c == 'n' || c == 'N')
        {
            printf("Goodbye\n");
        }
        else
        {
            printf("Invalid command. Try again.\n"); // Se o user digitar outro char que não seja y,
                                                     // Y, n ou N, vai mostrar essa mensagem.
                                                     // No entanto, por que estamos usando o atalho
                                                     // get_char da library do curso, se o user só
                                                     // digitar um string aleatório, nenhuma
                                                     // mensagem é mostrada e a pergunta é repetida.
                                                     //Precisei colocar o while porque antes quando o user
                                                     // digitava um char aleatório, o programa parava de rodar.
        }
    }
}
