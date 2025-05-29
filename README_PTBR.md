
# 🏰 Dungeons of Doom

## 🎮 História do Jogo

Em *Dungeons of Doom*, você é um aventureiro corajoso que precisa enfrentar perigos e resolver enigmas em uma masmorra ancestral. A jornada começa em uma vila pacífica, onde os habitantes alertam sobre os perigos ocultos nas profundezas. Para escapar e alcançar a liberdade, o jogador deverá encontrar chaves, escapar de monstros, resolver puzzles e passar por três fases desafiadoras.

## 📜 Regras do Jogo

- O jogador deve encontrar uma chave (`@`) e usá-la para abrir a porta (`D → =`) de saída de cada fase.
- Cada fase possui obstáculos, como paredes (`*`), espinhos (`#`) e monstros (`X` e `V`).
- Há interações com NPCs (`P`), botões (`O`) e teleportes (`>`).
- Tocar em espinhos ou ser atingido por monstros reinicia a fase. Após três falhas, o jogo volta ao menu principal.

### 🧍‍♂️ Personagens e Elementos

| Símbolo | Significado                         |
|--------|--------------------------------------|
| `&`    | Jogador                              |
| `P`    | NPC                                  |
| `*`    | Parede (bloqueia movimento)          |
| `@`    | Chave para abrir a porta             |
| `D`    | Porta fechada                        |
| `=`    | Porta aberta                         |
| `O`    | Botão interativo (efeito variável)   |
| `#`    | Espinho (reinicia a fase)            |
| `>`    | Teletransporte (em pares)            |
| `X`    | Monstro Nível 1 (movimento aleatório)|
| `V`    | Monstro Nível 2 (segue o jogador)    |

### 🕹️ Controles

- `W` – mover para cima  
- `A` – mover para esquerda  
- `S` – mover para baixo  
- `D` – mover para direita  
- `i` – interagir com objetos

## 🗺️ Estrutura do Jogo

- **Menu Principal:** Opções para Jogar, Créditos e Sair  
- **Vila:** Tutorial interativo com NPCs  
- **Fase 1, 2 e 3:** Desafios crescentes com puzzles e inimigos  
- **Vitória:** Exibida ao concluir todas as fases  
- **Derrota:** Exibida ao falhar três vezes em uma fase

## 🛠️ Instruções de Compilação e Execução

### 🔧 Requisitos

- Sistema operacional Windows (uso da biblioteca `<conio.h>`)  
- Compilador compatível com C (como GCC)

### ▶️ Compilação

```bash
gcc DungeonsOfDoom.c -o DungeonsOfDoom
```

### 🚀 Execução

```bash
./DungeonsOfDoom
```

> **Nota:** Use `cls` no terminal para limpar a tela no Windows, já que o código usa `system("cls")`.

## 🗃️ Organização do Código

Atualmente, o jogo está implementado em um único arquivo:

```
📁 DungeonsOfDoom/
└── DungeonsOfDoom.c
```

## 👨‍💻 Créditos

Desenvolvido por:

- Daniel Barros 
- Cauê Milhomem  
- Wisley Gabriel
