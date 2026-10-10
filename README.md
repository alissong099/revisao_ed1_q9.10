# Estrutura de Dados I — Fila Dinâmica Circular em C

Este repositório contém a implementação de uma **Fila Dinâmica Circular** desenvolvida na linguagem **C**, referente às atividades da disciplina de **Estrutura de Dados I** do **Instituto Federal do Piauí (IFPI)**.

---

## 👥 Autores e Informações Acadêmicas

- **Instituição:** Instituto Federal do Piauí (IFPI)
- **Disciplina:** Estrutura de Dados I
- **Professora:** Elane Cristina Oliveira dos Santos
- **Alunos:**
  - Alexandre Monteiro Rodrigues Coelho
  - Alisson Gabriel do Nascimento
  - Irene Maria Lopes da Costa

---

## 📌 Sobre o Projeto

O código implementa uma **Fila (FIFO - *First In, First Out*)** utilizando uma **lista encadeada circular**. Em uma fila circular encadeada, o ponteiro da fila aponta para o último elemento inserido, e o ponteiro do último elemento (`prox`) aponta diretamente de volta para o primeiro elemento.

### Principais Características
- **Alocação Dinâmica:** Uso de `malloc` e `free` para gerenciamento eficiente de memória.
- **Lógica FIFO:** O primeiro elemento a entrar é o primeiro a sair.
- **Abstração de Tipo:** Definição do tipo `Item` (`typedef int Item`) para facilidade de manutenção.

---

## 🛠️ Funções Implementadas

| Função | Descrição |
| :--- | :--- |
| `no(x, sucessor)` | Função auxiliar interna que aloca dinamicamente um nó na memória. |
| `vaziaf(F)` | Verifica se a fila está vazia (retorna 1 para verdadeira, 0 para falsa). |
| `enfileira(x, &F)` | Insere um novo elemento `x` no final da fila. |
| `desenfileira(&F)` | Remove e retorna o elemento do início da fila. |
| `exibe(F)` | Percorre e exibe no console todos os elementos contidos na fila. |
| `destroif(&F)` | Desaloca todos os nós da fila, liberando a memória alocada. |

---

## 🚀 Como Executar

### Pré-requisitos
Ter um compilador C (como o **GCC**) instalado na sua máquina.

### Passo a Passo

1. **Salve o código** em um arquivo chamado `fila.c`.

2. **Abra o terminal** na pasta onde o arquivo foi salvo e compile o projeto:
   ```bash
   gcc fila.c -o fila
   ```

3. **Execute o programa:**
   - **Linux / macOS:**
     ```bash
     ./fila
     ```
   - **Windows (CMD/PowerShell):**
     ```cmd
     .\fila.exe
     ```

---

## 🖥️ Exemplo de Saída no Terminal

```text
=== Teste de Fila ===
Inserindo 10, 20, 30
Fila: 10 20 30 
Saiu: 10
Fila: 20 30 
Inserindo 40
Fila: 20 30 40 

Esvaziando:
Saiu: 20
Saiu: 30
Saiu: 40
```
