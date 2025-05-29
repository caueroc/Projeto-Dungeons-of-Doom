#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char mapa[10][10];
char mapaGrande[20][20];
char mapagigante[40][40];
int jogadorX, jogadorY;
int chave;

void limparTela()
{
    system("cls");
}

void desenharMapa(int tamanho)
{
    int i, j;
    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if (i == jogadorX && j == jogadorY)
            {
                printf("& ");
            }
            else if (tamanho == 10)
            {
                printf("%c ", mapa[i][j]);
            }
            else
            {
                printf("%c ", mapaGrande[i][j]);
            }
        }
        printf("\n");
    }
}

void tutorial()
{
    int i, j;
    char comando;

    char mapaLocal[10][10] = {
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', 'P', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '@', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', 'D', ' ', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mapa[i][j] = mapaLocal[i][j];
        }
    }

    jogadorX = 1;
    jogadorY = 1;
    chave = 0;

    limparTela();
    printf("Bem vindo ao Tutorial!\n");
    printf("Use as teclas W A S D para se mover.\n");
    printf("Interaja com o NPC (P) chegando ate ele.\n");
    printf("Pegue a chave (@) para abrir a porta (D).\n");
    printf("Pressione qualquer tecla para comecar...\n");
    getch();

    while (1)
    {
        limparTela();
        desenharMapa(10);

        if (mapa[jogadorX][jogadorY] == 'P' || mapa[jogadorX][jogadorY] == '@' || mapa[jogadorX][jogadorY] == 'D' || mapa[jogadorX][jogadorY] == '=')
        {
            printf("Aperte 'i' para interagir\n");
        }

        comando = getch();

        int novoX = jogadorX;
        int novoY = jogadorY;

        if (comando == 'w')
            novoX--;
        if (comando == 's')
            novoX++;
        if (comando == 'a')
            novoY--;
        if (comando == 'd')
            novoY++;

        if (mapa[novoX][novoY] != '*')
        {
            jogadorX = novoX;
            jogadorY = novoY;
        }

        if (comando == 'i')
        {
            if (mapa[jogadorX][jogadorY] == 'P')
            {
                printf("NPC: Ola! sou um cacador de tesouros, \nouvi dizer que nessas masmorras tem tesouros, \nmas tambem tem monstros e armadilhas, tome cuidado, \npegue a chave e abra a porta!\n");
                getch();
            }

            if (mapa[jogadorX][jogadorY] == '@')
            {
                chave = 1;
                mapa[4][4] = ' ';
                mapa[8][7] = '=';
                printf("Voce pegou a chave!\n");
                getch();
            }

            if (mapa[jogadorX][jogadorY] == 'D' || mapa[jogadorX][jogadorY] == '=')
            {
                if (chave)
                {
                    printf("Voce usou a chave e entrou na masmorra!\n");
                    getch();
                    break;
                }
                else
                {
                    printf("A porta esta trancada!\n");
                    getch();
                }
            }
        }
    }
}

void fase1()
{
    int i, j;
    char comando;

    char mapaLocal[10][10] = {
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '@', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', 'D', ' ', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mapa[i][j] = mapaLocal[i][j];
        }
    }

    jogadorX = 1;
    jogadorY = 1;
    chave = 0;

    while (1)
    {
        limparTela();
        desenharMapa(10);

        if (mapa[jogadorX][jogadorY] == '@' || mapa[jogadorX][jogadorY] == 'D' || mapa[jogadorX][jogadorY] == '=')
        {
            printf("Aperte 'i' para interagir\n");
        }

        comando = getch();

        int novoX = jogadorX;
        int novoY = jogadorY;

        if (comando == 'w')
            novoX--;
        if (comando == 's')
            novoX++;
        if (comando == 'a')
            novoY--;
        if (comando == 'd')
            novoY++;

        if (mapa[novoX][novoY] != '*')
        {
            jogadorX = novoX;
            jogadorY = novoY;
        }

        if (comando == 'i')
        {
            if (mapa[jogadorX][jogadorY] == '@')
            {
                chave = 1;
                mapa[4][4] = ' ';
                mapa[8][7] = '=';
                printf("Voce pegou a chave!\n");
                getch();
            }

            if (mapa[jogadorX][jogadorY] == 'D' || mapa[jogadorX][jogadorY] == '=')
            {
                if (chave)
                {
                    printf("Voce completou a Fase 1!\n");
                    getch();
                    break;
                }
                else
                {
                    printf("A porta esta trancada!\n");
                    getch();
                }
            }
        }
    }
}

void fase2()
{
    int i, j;
    char comando;
    int monstroX, monstroY;
    int botaoAtivado;
    int vivo;
    int reiniciarFase = 1;

    char mapaLocal[20][20] = {
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}};

    while (reiniciarFase)
    {

        vivo = 1;
        jogadorX = 1;
        jogadorY = 1;
        chave = 0;
        botaoAtivado = 0;
        monstroX = 15;
        monstroY = 15;

        for (i = 0; i < 20; i++)
        {
            for (j = 0; j < 20; j++)
            {
                mapaGrande[i][j] = mapaLocal[i][j];
            }
        }
        mapaGrande[monstroX][monstroY] = 'X';

        srand(time(NULL));

        while (vivo)
        {
            limparTela();
            desenharMapa(20);

            if (mapaGrande[jogadorX][jogadorY] == '@' || mapaGrande[jogadorX][jogadorY] == 'D' ||
                mapaGrande[jogadorX][jogadorY] == '=' || mapaGrande[jogadorX][jogadorY] == 'O')
            {
                printf("Aperte 'i' para interagir\n");
            }

            comando = getch();

            int novoX = jogadorX;
            int novoY = jogadorY;

            if (comando == 'w')
                novoX--;
            if (comando == 's')
                novoX++;
            if (comando == 'a')
                novoY--;
            if (comando == 'd')
                novoY++;

            if (mapaGrande[novoX][novoY] != '*')
            {
                jogadorX = novoX;
                jogadorY = novoY;
            }

            if (mapaGrande[jogadorX][jogadorY] == '#')
            {
                printf("Voce tocou no espinho e morreu! Reiniciando a fase...\n");
                getch();
                break;
            }

            if (comando == 'i')
            {
                if (mapaGrande[jogadorX][jogadorY] == '@')
                {
                    chave = 1;
                    mapaGrande[4][4] = ' ';
                    mapaGrande[18][18] = '=';
                    printf("Voce pegou a chave!\n");
                    getch();
                }
                if (mapaGrande[jogadorX][jogadorY] == 'D' || mapaGrande[jogadorX][jogadorY] == '=')
                {
                    if (chave)
                    {
                        printf("Voce completou a Fase 2!\n");
                        getch();
                        vivo = 0;
                        reiniciarFase = 0;
                        break;
                    }
                    else
                    {
                        printf("A porta esta trancada!\n");
                        getch();
                    }
                }
                if (mapaGrande[jogadorX][jogadorY] == 'O' && !botaoAtivado)
                {
                    printf("Voce apertou o botao! Novos espinhos surgiram!\n");
                    getch();
                    for (i = 5; i < 15; i++)
                        mapaGrande[i][10] = '#';
                    for (j = 5; j < 15; j++)
                        mapaGrande[10][j] = '#';
                    botaoAtivado = 1;
                }
            }

            mapaGrande[monstroX][monstroY] = ' ';
            int dir = rand() % 4;
            int proxX, proxY;

            if (dir == 0)
            {
                proxX = monstroX - 1;
            }
            else if (dir == 1)
            {
                proxX = monstroX + 1;
            }
            else
            {
                proxX = monstroX;
            }
            if (dir == 2)
            {
                proxY = monstroY - 1;
            }
            else if (dir == 3)
            {
                proxY = monstroY + 1;
            }
            else
            {
                proxY = monstroY;
            }

            if (mapaGrande[proxX][proxY] == ' ' || mapaGrande[proxX][proxY] == '&')
            {
                monstroX = proxX;
                monstroY = proxY;
            }

            mapaGrande[monstroX][monstroY] = 'X';

            if (monstroX == jogadorX && monstroY == jogadorY)
            {
                printf("O monstro te pegou! Reiniciando a fase...\n");
                getch();
                break;
            }
        }
    }
}
void fase3()
{
    char mapagigante[40][40];
    int i, j;
    int jogadorX = 1, jogadorY = 1;
    int monstroX = 10, monstroY = 10;
    int monstro2X = 20, monstro2Y = 20;
    int chave = 0;
    int vidas = 3;
    int teleX = 0, teleY = 39;
    int turnoMonstro2 = 0;
    int npcFala = 0;
    int botaoAtivado = 0;

    srand(time(NULL));

    for (i = 0; i < 40; i++)
    {
        for (j = 0; j < 40; j++)
        {
            if (i == 0 || i == 39 || j == 0 || j == 39)
                mapagigante[i][j] = '*';
            else
                mapagigante[i][j] = ' ';
        }
    }

    mapagigante[5][5] = 'P';
    mapagigante[5][35] = '@';
    mapagigante[30][30] = 'D';
    mapagigante[15][15] = 'O';
    mapagigante[teleX][1] = '>';
    mapagigante[teleY][38] = '<';

    for (i = 12; i < 18; i++)
    {
        mapagigante[25][i] = '#';
        mapagigante[i][25] = '#';
    }

    while (1)
    {
        system("cls");

        int visao = 10;
        int topo = jogadorX - visao;
        int base = jogadorX + visao;
        int esquerda = jogadorY - visao;
        int direita = jogadorY + visao;

        if (topo < 0)
        {
            base += -topo;
            topo = 0;
        }
        if (base > 39)
        {
            topo -= (base - 39);
            base = 39;
            if (topo < 0)
                topo = 0;
        }
        if (esquerda < 0)
        {
            direita += -esquerda;
            esquerda = 0;
        }
        if (direita > 39)
        {
            esquerda -= (direita - 39);
            direita = 39;
            if (esquerda < 0)
                esquerda = 0;
        }

        for (i = topo; i <= base; i++)
        {
            for (j = esquerda; j <= direita; j++)
            {
                if (i == jogadorX && j == jogadorY)
                    printf("&");
                else if (i == monstro2X && j == monstro2Y)
                    printf("V");
                else if (i == monstroX && j == monstroY)
                    printf("X");
                else
                    printf("%c", mapagigante[i][j]);
            }
            printf("\n");
        }

        printf("Vidas: %d | Chave: %s\n", vidas, chave ? "SIM" : "NAO");

        char pos = mapagigante[jogadorX][jogadorY];

        if (pos == 'P' || pos == 'O' || pos == '@' || pos == '=' || pos == 'D')
            printf("Aperte i para interagir\n");
        if (pos == '>' || pos == '<')
            printf("Aperte i para teletransportar\n");

        char move = getch();
        int newX = jogadorX, newY = jogadorY;

        if (move == 'w')
            newX--;
        else if (move == 's')
            newX++;
        else if (move == 'a')
            newY--;
        else if (move == 'd')
            newY++;
        else if (move == 'i')
        {
            if (pos == 'P' && npcFala == 0)
            {
                printf("\nEstou de volta... bom saber que nao sou o unico sobrevivente.\nTome cuidado! Esse e o desafio final... Monstros e armadilhas te aguardam!\nPegue a chave e fuja!\n");
                npcFala = 1;
                getch();
            }
            if (pos == 'O' && !botaoAtivado)
            {
                for (i = 10; i < 30; i++)
                {
                    for (j = 10; j < 30; j++)
                    {
                        if ((i + j) % 7 == 0)
                        {
                            mapagigante[i][j] = '#';
                        }
                    }
                }
                botaoAtivado = 1;
                printf("Voce apertou o botao! Mais armadilhas surgiram!\n");
                getch();
            }
            if (pos == '@')
            {
                chave = 1;
                mapagigante[30][30] = '=';
                mapagigante[5][35] = ' ';
                printf("Voce pegou a chave! A porta esta aberta!\n");
                getch();
            }
            if (pos == '=' && chave)
            {
                printf("Vitoria!\n");
                printf("Voce superou todos os desafios...\n");
                printf("Provou sua forca, sua coragem e sua determinacao.\n");
                printf("Agora, este mundo conhece seu verdadeiro poder.\n");
                printf("Mas lembre-se...\n");
                printf("Nem toda vitoria e eterna.\n");
                getch();
                return;
            }
            if (pos == '>' || pos == '<')
            {
                if (pos == '>')
                {
                    jogadorX = teleY;
                    jogadorY = 38;
                }
                else
                {
                    jogadorX = teleX;
                    jogadorY = 1;
                }
                continue;
            }
        }

        if (mapagigante[newX][newY] != '*')
            jogadorX = newX, jogadorY = newY;

        pos = mapagigante[jogadorX][jogadorY];
        if (pos == '#')
        {
            vidas--;
            if (vidas <= 0)
            {
                printf("Derrotado...\n");
                printf("Sua dor me diverte...\n");
                printf("Sua fraqueza alimenta minha existencia.\n");
                printf("Volte... \nse tiver coragem.\n");
                printf("\nMas saiba: o abismo sempre engole os fracos.\n");
                getch();
                return;
            }
            printf("Voce morreu! Vidas restantes: %d\n", vidas);
            jogadorX = 1;
            jogadorY = 1;
            monstroX = 10;
            monstroY = 10;
            monstro2X = 20;
            monstro2Y = 20;
            getch();
            continue;
        }

        mapagigante[monstroX][monstroY] = ' ';
        int dir = rand() % 4;
        int mX = monstroX, mY = monstroY;
        if (dir == 0)
            mX++;
        else if (dir == 1)
            mX--;
        else if (dir == 2)
            mY++;
        else
            mY--;
        if (mapagigante[mX][mY] != '*')
        {
            monstroX = mX;
            monstroY = mY;
        }

        if (turnoMonstro2 == 0)
        {
            if (monstro2X < jogadorX)
                monstro2X++;
            else if (monstro2X > jogadorX)
                monstro2X--;
            if (monstro2Y < jogadorY)
                monstro2Y++;
            else if (monstro2Y > jogadorY)
                monstro2Y--;
        }
        turnoMonstro2 = (turnoMonstro2 + 1) % 4;

        if ((monstroX == jogadorX && monstroY == jogadorY) || (monstro2X == jogadorX && monstro2Y == jogadorY))
        {
            vidas--;
            if (vidas <= 0)
            {
                printf("Game Over! Voltando ao menu...\n");
                getch();
                return;
            }
            printf("Voce foi pego pelo monstro! Vidas restantes: %d\n", vidas);
            jogadorX = 1;
            jogadorY = 1;
            monstroX = 10;
            monstroY = 10;
            monstro2X = 20;
            monstro2Y = 20;
            getch();
            continue;
        }
    }
}

void creditos()
{
    limparTela();
    printf("Creditos:\n");
    printf("Desenvolvido por Daniel Barros, Caue Milhomem e Wisley Gabriel\n");
    printf("Pressione qualquer tecla para voltar ao menu.\n");
    getch();
}

int main()
{
    int opcao;

    while (1)
    {
        limparTela();
        printf("=== Dungeons Of Doom ===\n");
        printf("1. Jogar\n");
        printf("2. Creditos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1)
        {
            tutorial();
            fase1();
            fase2();
            fase3();
            getch();
        }
        else if (opcao == 2)
        {
            creditos();
        }
        else if (opcao == 3)
        {
            printf("Saindo do jogo...\n");
            break;
        }
        else
        {
            printf("Opcao invalida!\n");
            getch();
        }
    }
    return 0;
}