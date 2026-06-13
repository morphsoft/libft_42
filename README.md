*Este projeto foi criado como parte do currículo da 42 por hvaini-d.*

# libft

## Descrição

A **libft** é uma biblioteca em C desenvolvida do zero como primeiro projeto do currículo da 42. O objetivo é recriar funções da biblioteca padrão C (`libc`), além de implementar utilitários adicionais frequentemente necessários em projetos futuros da escola.

A biblioteca cobre cinco categorias principais de funções:

- **Verificação de caracteres** (`is*`): classificação de caracteres ASCII
- **Manipulação de memória** (`mem*`): operações sobre blocos de memória bruta
- **Manipulação de strings** (`str*`): operações sobre strings terminadas em `\0`
- **Saída em file descriptors** (`put*_fd`): escrita em qualquer fd (stdout, stderr, etc.)
- **Listas encadeadas** (`lst*`): estrutura `t_list` com alocação dinâmica

Ao reescrever essas funções manualmente, o projeto reforça o entendimento de ponteiros, alocação de memória, aritmética de ponteiros e comportamento de borda das funções da libc.

---

## Instruções

### Requisitos

- Compilador `cc` (GCC ou Clang)
- `make`
- Sistema Unix (Linux ou macOS)

### Compilação

```bash
# Compilar a biblioteca
make

# Remover arquivos objeto
make clean

# Remover arquivos objeto e a biblioteca
make fclean

# Recompilar do zero
make re
```

O comando `make` gera o arquivo estático **`libft.a`** no diretório raiz.

### Uso em outro projeto

1. Copie `libft.a` e `libft.h` para o diretório do seu projeto.
2. Inclua o header no seu código:
   ```c
   #include "libft.h"
   ```
3. Compile linkando a biblioteca:
   ```bash
   cc seu_arquivo.c -L. -lft -o seu_programa
   ```

---

## Referência da biblioteca

### Verificação de caracteres

| Função | Descrição |
|---|---|
| `ft_isalpha(int c)` | Retorna não-zero se `c` é uma letra (a–z ou A–Z) |
| `ft_isdigit(int c)` | Retorna não-zero se `c` é um dígito (0–9) |
| `ft_isalnum(int c)` | Retorna não-zero se `c` é letra ou dígito |
| `ft_isascii(int c)` | Retorna não-zero se `c` está na faixa ASCII (0–127) |
| `ft_isprint(int c)` | Retorna não-zero se `c` é um caractere imprimível |
| `ft_toupper(int c)` | Converte `c` para maiúsculo, se aplicável |
| `ft_tolower(int c)` | Converte `c` para minúsculo, se aplicável |

### Manipulação de memória

| Função | Descrição |
|---|---|
| `ft_memset(void *dest, int c, size_t n)` | Preenche `n` bytes de `dest` com o valor `c` |
| `ft_bzero(void *s, size_t n)` | Zera `n` bytes a partir de `s` |
| `ft_memcpy(void *dest, const void *src, size_t n)` | Copia `n` bytes de `src` para `dest` (sem overlap) |
| `ft_memmove(void *dest, const void *src, size_t n)` | Copia `n` bytes com suporte a regiões sobrepostas |
| `ft_memchr(const void *s, int c, size_t n)` | Busca `c` nos primeiros `n` bytes de `s` |
| `ft_memcmp(const void *s1, const void *s2, size_t n)` | Compara `n` bytes entre `s1` e `s2` |
| `ft_calloc(size_t count, size_t size)` | Aloca `count * size` bytes zerados |

### Manipulação de strings

| Função | Descrição |
|---|---|
| `ft_strlen(const char *s)` | Retorna o comprimento de `s` |
| `ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Copia `src` para `dst` com limite de tamanho |
| `ft_strlcat(char *dst, const char *src, size_t dstsize)` | Concatena `src` em `dst` com limite de tamanho |
| `ft_strchr(const char *s, int c)` | Encontra a primeira ocorrência de `c` em `s` |
| `ft_strrchr(const char *s, int c)` | Encontra a última ocorrência de `c` em `s` |
| `ft_strncmp(const char *s1, const char *s2, size_t n)` | Compara até `n` caracteres de `s1` e `s2` |
| `ft_strnstr(const char *haystack, const char *needle, size_t len)` | Busca `needle` em `haystack` nos primeiros `len` bytes |
| `ft_strdup(const char *s)` | Retorna uma cópia alocada de `s` |
| `ft_substr(char const *s, unsigned int start, size_t len)` | Extrai substring de `s` a partir de `start` com tamanho `len` |
| `ft_strjoin(char const *s1, char const *s2)` | Concatena `s1` e `s2` em uma nova string alocada |
| `ft_strtrim(char const *s1, char const *set)` | Remove caracteres de `set` do início e fim de `s1` |
| `ft_split(char const *s, char c)` | Divide `s` pelo delimitador `c`, retorna array de strings |
| `ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Aplica `f` a cada caractere de `s`, retorna nova string |
| `ft_striteri(char *s, void (*f)(unsigned int, char *))` | Aplica `f` a cada caractere de `s` in-place |
| `ft_atoi(const char *str)` | Converte string para inteiro |
| `ft_itoa(int n)` | Converte inteiro para string alocada |

### Saída em file descriptors

| Função | Descrição |
|---|---|
| `ft_putchar_fd(char c, int fd)` | Escreve o caractere `c` no fd |
| `ft_putstr_fd(char *s, int fd)` | Escreve a string `s` no fd |
| `ft_putendl_fd(char *s, int fd)` | Escreve `s` seguida de `\n` no fd |
| `ft_putnbr_fd(int n, int fd)` | Escreve o inteiro `n` no fd |

### Listas encadeadas

A estrutura utilizada é:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

| Função | Descrição |
|---|---|
| `ft_lstnew(void *content)` | Cria um novo nó com `content` |
| `ft_lstadd_front(t_list **lst, t_list *new)` | Insere `new` no início da lista |
| `ft_lstadd_back(t_list **lst, t_list *new)` | Insere `new` no final da lista |
| `ft_lstsize(t_list *lst)` | Retorna o número de nós da lista |
| `ft_lstlast(t_list *lst)` | Retorna o último nó da lista |
| `ft_lstdelone(t_list *lst, void (*del)(void *))` | Libera um nó usando `del` para o conteúdo |
| `ft_lstclear(t_list **lst, void (*del)(void *))` | Libera todos os nós da lista |
| `ft_lstiter(t_list *lst, void (*f)(void *))` | Aplica `f` ao conteúdo de cada nó |
| `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Cria nova lista aplicando `f` a cada nó |
