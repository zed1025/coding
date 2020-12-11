import java.util.*;

public class CaesarCipher{

    public String fromNewLanguage(String languageTokens){
        char[] chars = languageTokens.toCharArray();
        char ch;
        StringBuilder sb = new StringBuilder();
        for(char op:chars){
            if(Character.isUpperCase(op)){
                ch = (char)(char)(((int)op+3-65)%26+65);    //caesar cipher with key k=3
                sb.append(ch);
            }else{
                ch = (char)(char)(((int)op+3-97)%26+97);    //caesar cipher with key k=3
                sb.append(ch);
            }
        }
        return new String(sb);
    }

    public String toDefaultLanguage(String languageTokens){
        char[] chars = languageTokens.toCharArray();
        char ch;
        StringBuilder sb = new StringBuilder();
        for(char op:chars){
            if(Character.isUpperCase(op)){
                ch = (char)(char)(((int)op-3-65)%26+65);
                sb.append(ch);
            }else{
                ch = (char)(char)(((int)op-3-97)%26+97);
                sb.append(ch);
            }
        }
        return new String(sb);
    }

    public static void main(String[] args){

    }
}
