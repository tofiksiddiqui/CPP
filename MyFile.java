class MyFile{
    public static void main(String[] args) throws Exception{
        try{
            int age = 15;
            if(age >= 18){
                System.out.println("You are old enough");
            }else{
                throw(age);
            }
        }catch(int number){
            System.out.println("Your age is : " + number);
        }
    }
}