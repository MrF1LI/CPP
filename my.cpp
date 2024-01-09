/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
https://onlinegdb.com/q5NYshxTi
*******************************************************************************/
#include <stdio.h>
using namespace std;

int main()
{
    // იპოვის M10 მასივის მაქსიმალური ელემენტის ინდექსს.
    int masivi[10] = { 1, -5, 20, -2, 4, 40, -7, 5, 8, -3 };
    int max = masivi[0], maxind = 0;
    
    for (int indexi = 1; indexi < 10; indexi++) {
        if (max < masivi[indexi]) {
            max = masivi[indexi];
            maxind = indexi;
        }
    }
    
    cout << "masivis maximaluri elementi = " << max << endl;
    cout << "maximaluri elementis indexi = " << maxind << endl;
    
    // იპოვის M10 მასივის უარყოფითი ელემენტებიდან უდიდესის ინდექსს. 
    int masivi[10] = { 1, 5, -20, -2, 4, 75, -3, -85, 9, -21 };
    int indexi, max, maxind;

    for (indexi = 0; indexi < 10; indexi++) {
        if (masivi[indexi] < 0) {
            max = masivi[indexi];
            maxind = indexi;
            break;
        }
    }

    for (; indexi < 10; indexi++) {
        if ((masivi[indexi] < 0) && (max < masivi[indexi])) {
            max = masivi[indexi];
            maxind = indexi;
        }
    }

    cout << "maqsimaluri uaryofiti ricxvi = " << max << endl;
    cout << "misi indexi = " << maxind << endl;
    
    // M10 მასივის დადებითი ელემენტების ინდექსებს გადაწერს N10 მასივში.
    int masivi1[10] = { 1, -5, 20, -2, 4, 75, -3, 85, 9, 21 };
    int masivi2[10];
    int indexi1, indexi2 = 0;

    for (indexi1 = 0; indexi1 < 10; indexi1++) {
        if (masivi1[indexi1] >= 0) {
            masivi2[indexi2++] = indexi1;
        }
    }

    for (indexi1 = 0; indexi1 < 10; indexi1++) {
        cout << masivi1[indexi1] << " ";
    }
    cout << endl;

    for (indexi1 = 0; indexi1 < indexi2; indexi1++) {
        cout << masivi2[indexi1] << " ";
    }
    cout << endl;
    
    // M10 მასივში ელემენტებს დაალაგებს ისე, რომ ჯერ მოთავსთდეს არანულოვანი ელემენტები, შემდეგ კი - ნულოვანი.
    int masivi[10] = { 1, -5, 0, -2, 0, 0, -3, 0, 9, 0 };
    int indexi, temp, Alami;

    for (indexi = 0; indexi < 10; indexi++) {
        cout << masivi[indexi] << " ";
    }
    cout << endl;

M1: Alami = 0;

    for (indexi = 0; indexi < 9; indexi++) {
        if ((masivi[indexi] == 0) && (masivi[indexi + 1] != 0)) {
            temp = masivi[indexi];
            masivi[indexi] = masivi[indexi + 1];
            masivi[indexi + 1] = temp;
            Alami = 1;
        }
    }

    if (Alami == 1) goto M1;

    for (indexi = 0; indexi < 10; indexi++) {
        cout << masivi[indexi] << " ";
    }
    cout << endl;
    
    // იპოვის A5,5 მასივის კენტი ელემენტების ჯამს.
    int masivi[3][3] = { { 1, -2, 3 }, { 4, 5, -6 }, { 7, 8, 9 } };
    int striqoni, sveti, jami = 0;

    for (striqoni = 0; striqoni < 3; striqoni++) {
        for (sveti = 0; sveti < 3; sveti++) {
            if (masivi[striqoni][sveti] % 2 == 1) {
                jami += masivi[striqoni][sveti];
            }
        }
    }

    cout << "kenti elementebis jami = " << jami << endl;

    for (striqoni = 0; striqoni < 3; striqoni++) {
        for (sveti = 0; sveti < 3; sveti++) {
            cout << masivi[striqoni][sveti] << " ";
        }
        cout << endl;
    }
    
    // იპოვის A5,5 მასივის მთავარი დიაგონალის ელემენტების ჯამს.
    int masivi[3][3] = { { 1, -2, 3 }, { 4, 5, -6 }, { 7, 8, 9 } };
    int striqoni, sveti, jami = 0;

    for (striqoni = 0; striqoni < 3; striqoni++) {
        jami += masivi[striqoni][striqoni];
    }

    cout << "jami = " << jami << endl;

    for (striqoni = 0; striqoni < 3; striqoni++) {
        for (sveti = 0; sveti < 3; sveti++) {
            cout << masivi[striqoni][sveti] << " ";
        }
        cout << endl;
    }
    
    // იპოვის A5,5 მასივის მთავარი დიაგონალის მაქსიმალურ
    // ელემენტს და ამ ელემენტის შემცველ სტრიქონს გადაწერს B5 მასივში.
    int masivi1[3][3] = { { 11, -2, 3 }, { 4, 15, -6 }, { -7, 8, 9 } };
    int masivi2[3] = { 0, 0, 0 };
    int striqoni, sveti, max = masivi1[0][0], maxstriqoni = 0;

    for (striqoni = 0; striqoni < 3; striqoni++) {
        if (max < masivi1[striqoni][striqoni]) {
            max = masivi1[striqoni][striqoni];
            maxstriqoni = striqoni;
        }
    }

    for (sveti = 0; sveti < 3; sveti++) {
        masivi2[sveti] = masivi1[maxstriqoni][sveti];
    }

    for (striqoni = 0; striqoni < 3; striqoni++) {
        for (sveti = 0; sveti < 3; sveti++) {
            cout << masivi1[striqoni][sveti] << " ";
        }
        cout << endl;
    }

    for (striqoni = 0; striqoni < 3; striqoni++) {
        cout << masivi2[striqoni] << " ";
    }
    cout << endl;
    
    // შეადგინეთ ფუნქცია, რომელიც გამოთვლის კვადრატის ფართობსა და პერიმეტრს.
    // ფუნქცია ფართობს გვიბრუნებს ჩვეულებრივი გზით, პერიმეტრს კი - მიმთითებლის/პოინტერის საშუალებით.
    /*
    int maxIndex(vector<int> );
int main(){
 vector<int> A; 
 int number; 
 while(cin>>number) 
 A.push_back(number);
 int index = maxIndex(A);
 cout<<index<<'\t'<<A[index]<<endl; 
 return 0;
}
int maxIndex(vector<int> x){
 int i, index; 
 for(i=0; i<x.size(); ++i)
 if(x[i]%3 == 0) break;
 index = i;
 for(i++; i<x.size(); ++i)
 if(x[i]%3 == 0 && x[i] > x[index])
 index = i;
 return index; 
} 
    */
    
    // ვექტორში ნამდვილი რიცხვებია, მათ შორის 200-ზე მეტი რიცხვებიც. 
    // შექმენით ფუნქცია, რომელიც იპოვის ვექტორის, 200-ზე მეტი მნიშვნელობის მქონე ელემენტებს 
    // შორის უმცირესის ინდექსს. გამოიყენეთ ფუნქცია main-ში კლავიატურიდან შევსებული ვექტორისთვის და 
    // დაბეჭდეთ ნაპოვნი ინდექსი და შესაბამისი რიცხვი.
    /*
    #include <vector>
using namespace std;
bool property(double );
int minIndex(vector<double> );
int main(){
vector<double> A; 
 double number; 
 while(cin>>number) 
 A.push_back(number);
 int index = minIndex(A);
 cout<<index<<'\t'<<A[index]<<endl; 
 return 0;
}
bool property(double d){
 return d > 200; 
}
int minIndex(vector<double> x){
 int i, index; 
 for(i=0; i<x.size(); ++i)
 if( property(x[i]) ) break;
 index = i;
 for(i++; i<x.size(); ++i)
 if(x[i] > 200 && x[i] < x[index])
 index = i;
 return index; 
}
    */
    
    // other
    
    /*
    ერთი ფაილიდან წაიკითხავს სტრიქონებს და ჩაწერს მათ სტრიქონების მასივში. შემდეგ ამ მასივიდან სტრიქონებს ჩაწერს მეორე ფაილში
https://onlinegdb.com/ZmqV4pbj4 .

. input.in ფაილის პირველ სტრიქონში ჩაწერილია სტუდენტის გვარი, მეორეში კი – მისი სახელი. output.out ფაილის პირველ სტრიქონში ჩაწერეთ ამ სტუდენტის სახელი, მეორეში კი გვარი.
https://onlinegdb.com/syDkUbCCv 
ამოცანა 5. ერთ ფაილში, სახელად weight.in წერია სამი სახის პროდუქტის წონა. მეორე ფაილში სახელად price.in  წერია ამ პროდუქტების ფასები. მესამე ფაილში გამოიტანეთ მოცემული რაოდენობის პროდუქტების შეძენაზე დახარჯული თანხის ოდენობა. 
     https://onlinegdb.com/Kxu41s6CI  
sorted.txt ფაილი შეიცავს ზრდადობით დალაგებულ მთელ 
რიცხვებს. ჩაწერეთ ეს რიცხვები სათანადო სპეციფიკაციის ვექტორში და შემდეგ ჩასვით ვექტორში კლავიატურიდან შემოტანილი მთელი რიცხვი ისე, რომ დალაგება არ დაირღვეს.
   https://onlinegdb.com/9bW3X7IsE  

sentence.dat ფაილი შეიცავს სტუდენტების სახელებს. ინფორმაცია ფაილიდან 
ჩაწერეთ სათანადო სპეციფიკაციის ვექტორში. დაწერეთ ფუნქცია, რომელის დაადგენს, 
არის თუ ვექტორში სახელი Anna. გამოიყენეთ ფუნქცია main-ში და დაბეჭდეთ 
შესაბამისი ინფორმაცია.
https://onlinegdb.com/OQcDQMpAx 
ვექტორში მთელი რიცხვებია. შექმენით ფუნქცია, რომელიც იპოვის ვექტორის 3-ის ჯერად ელემენტებს შორის უდიდესის ინდექსს. თუ 3-ის ჯერადი რიცხვები ფაილში არ არის, ფუნქცია დააბრუნებს -1 ს. გამოიყენეთ ფუნქცია main-ში კლავიატურიდან შევსებული ვექტორისთვის და დაბეჭდეთ ნაპოვნი ინდექსი და შესაბამისი რიცხვი, ან  გზავნილი ფაილში 3-ის ჯერადი რიცხვების არარსებობის შესახებ
https://onlinegdb.com/1-ziAurxG 


დაწერეთ ფუნქცია, რომელიც გაუცვლის მნიშვნელობებს 2 მთელ რიცხვს. გამოიყენეთ ფუნქცია ძირითად პროგრამაში და შედეგი დაბეჭდეთ
https://onlinegdb.com/B8tjnz_Dk 

დაწერეთ ფუნქცია, რომელიც გაუცვლის მნიშვნელობებს 2 ნამდვილ რიცხვს. გამოიყენეთ ფუნქცია ძირითად პროგრამაში და დაალაგეთ ზრდადობით 3 მოცემული ნამდვილი რიცხვი. შედეგი დაბეჭდეთ
https://onlinegdb.com/JWR3BM6NS 

შექმენით 10 შემთხვევითი მთელი რიცხვის ვექტორი [65,90] დიაპაზონიდან – დიდი ინგლისური ასოების კოდები. დაბეჭდეთ ამ კოდების შესაბამისი სიმბოლოები. დასაბეჭდად გამოიყენეთ თქვენ მიერ განსაზღვრული ფუნქცია. შემდეგ დაბეჭდეთ სიმბოლოებს შორის უმცირესი და მისი კოდი.
https://onlinegdb.com/vzDIF-B8O 

შეცვალეთ პროგრამა ისე, რომ მან დაბეჭდოს შემთხვევითი კოდების მქონე სიმბოლოები  დალაგებული კლებადობით.
შესაბამისად შეცვალეთ უმცირები სიმბოლოს და მისი კოდის ბეჭდვის შეტყობინებაც.



შექმენით ფუნქცია პროტოტიპით bool IsLetter(char p); რომელიც დაადგენს არის თუ არა მისი p პარამეტრი ასო. გამოიძახეთ ფუნქცია ძირითად პროგრამაში კლავიატურიდან შემოტანილი სიმბოლოსთვის და შედეგი დაბეჭდეთ.
https://onlinegdb.com/ABJatHSPz  
დაწერეთ ფუნქცია, რომლის პარამეტრი არის სტრიქონი. ფუნქციამ უნდა დაადგინოს, წარმოადგენს თუ არა იგი პალინდრომს. სტრიქონი არის პალონდრომი, თუ ის ერთნაირად იკითხება როგორც მარჯვნიდან მარცხნივ, ისე მარცხნიდან მარჯვნივ.  მაგალითად, ANNA – სტრიქონი-პალინდრომია. გამოიყენეთ ფუნქცია კლავიატურიდან შემოტანილი სტრიქონისთვის და დაბეჭდეთ შედეგი.
https://onlinegdb.com/rvFUG5blAQ 
ვექტორი შეიცავს N მთელ შემთხვევით რიცხვს. დაწერეთ პროგრამა, რომელიც იპოვის და დაბეჭდავს ა)ვექტორის უდიდესი ელემენტის მნიშვნელობას და მის ინდექსს;.
https://onlinegdb.com/NDnHJ8qIP 
ბ) ელემენტების ჯამს და საშუალო არითმეტიკულს


 ვექტორი შეიცავს N მთელ რიცხვს. დაწერეთ პროგრამა, რომელიც იპოვის და დაბეჭდავს ვექტორში მოცემული b რიცხვის ტოლი პირველივე ელემენტის ინდექსს, ან, თუ ასეთი ელემენტი არ აღმოჩნდა, შესაბამის გზავნილს. ვექტორი შეავსეთ შემთხვევითი რიცხვებით, b შემოიტანეთ კლავიატურიდან 
https://onlinegdb.com/eZdQ5hBTA 



ვექტორი შეიცავს სიტყვებს. დაწერეთ ფუნქცია, რომელიც იპოვის ყველაზე 
გრძელ სიტყვას და მის სიგრძეს. გამოიყენეთ ფუნქცია main()–ში და დაბეჭდეთ შედეგი. ვექტორში სიტყვები ჩაწერეთ words.txt ფაილიდან.
https://onlinegdb.com/80Ca3MrJ1m 

input.txt ფაილში წერია მთელი რიცხვები. შექმენით ფუნქცია, რომელიც შეიტანს ამ რიცხვებს ვექტორში და დააბრუნებს პირველივე დადებითის ინდექსს. თუ დადებითი რიცხვი მათ შორის არ არის, დააბრუნებს -1-ს. გამოიყენეთ ფუნქცია პროგრამაში და დაბეჭდეთ სათანადო გზავნილი.
https://onlinegdb.com/RUZyEysw_o 

დაწერეთ ფუნქცია, რომელიც მთელ ვექტორში დაითვლის პირველი p ელემენტის ჯამს.
ვექტორში რიცხვები ჩაწერეთ ints.txt ფაილიდან. ძირითად პროგრამაში გამოიძახეთ 
ფუნქცია პირველი: d
ა) 10 რიცხვის ჯამის დასადგენად;
ბ) 15 რიცხვის ჯამის დასათვლელად;
გ) კლავიატურიდან შემოტანილი რაოდენობის რიცხვის ჯამის დასათვლელად.
რიცხვების ვექტორში ჩასაწერად და ვექტორის ელემენტების დასაბეჭდად ასევე შექმენით 
ფუნქციები.
 https://onlinegdb.com/_DCoPF-hE 

ვექტორი შეიცავს N მთელ შემთხვევით რიცხვს [-20,80] შუალედიდან. დაწერეთ 
პროგრამა, რომელიც იპოვის და დაბეჭდავს ვექტორის:
ა) უმცირესი ელემენტის მნიშვნელობას და მის ინდექსს; 
ბ) ელემენტების ჯამის მეხუდედს;
გ) ელემენტების ნამრავლს;
დ) კენტი ელემენტების საშუალო არითმეტიკულს:
https://onlinegdb.com/ukIsMy-dA 




A(M  X  N ) ორგანზომილებიან ვექტორში მთელი რიცხვებია. დაწერეთ ფუნქცია, რომელიც გაცვლის ვექტორის უმცირესი ელემენტის მქონე სტრიქონს და ბოლო სტრიქონს. რიცხვები ვექტორში ჩაწერეთ კლავიატურიდან.. პროგრამაში დაბეჭდეთ  გარდაქმნილი ვექტორი

https://onlinegdb.com/BZRXo_OXH 

V(M X N ) ორგანზომილებიან ვექტორში ნამდვილი რიცხვებია. დაწერეთ ფუნქცია, რომელიც დააბრუნებს ვექტორის უმცირესი ელემენტის ინდექსებს. რიცხვები ვექტორში ჩაწერეთ reals.in ფაილიდან. ამისათვის ასევე დაწერეთ ფუნქცია. პროგრამაში გამოიყენეთ ორივე ფუნქცია და დაბეჭდეთ უმცირესი ელემენტი და მისი ინდექსები. 
https://onlinegdb.com/JAoI3lZSQ 

შექმენით data1 ფაილი. მასში კლავიატურიდან შეიტანეთ მთელი რიცხვები შექმენით data2 ფაილი. მასში კლავიატურიდან შეიტანეთ ნამდვილი რიცხვები. მესამე ფაილში data3 ჩაწერეთ  ამ რიცხვების ნამრავლი. data3 ფაილში ჩასაწერი მონაცემები ჩაწერამდე დაალაგეთ კლებადობით.
https://onlinegdb.com/ALf1DJucT 
https://onlinegdb.com/ZibGlnQS4

ვექტორი შეიცავს მთელ რიცხვებს [-20,80] შუალედში. შეტანის ორგანიზებისას ვექტორის ზომა არ შეზღუდოთ. იპოვეთ ვექტორის დადებითი ელემენტების საშუალო არითმეტიკული. ვექტორის შევსებისა და ბეჭდვისთვის, ასევე საშუალო არითმეტიკულის გამოსათვლელად გამოიყენეთ ფუნქციები.  

https://onlinegdb.com/YzecRKpeg 

    */

    return 0;
}
