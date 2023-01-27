{
    
    int quant;
    int choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food items solved
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //total price of items
    int Trooms=0,Tpasta=0,Tburger=0,Tnoodles=0,Tshake=0,Tchicken=0;
    
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll :";
    cin>>Qchicken;
    
    
    m:
    cout<<"\n\t\t\t Please select from the menu option";
    cout<<"\n\n1) Rooms";
    cout<<"\n2)pasta";
    cout<<"\n3)burger";
    cout<<"\n4)noodles";
    cout<<"\n5)shake";
    cout<<"\n6)chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8)exit";
    cout<<"\n9)reset";
    
    cout<<"\n\n please enter your choice";
    cin>>choice;
    switch(choice)
    {   //rooms
        case 1: 
            cout<<"enter the number of rooms you want";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Trooms=Trooms+(quant*1200);
                cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you";
                cout<<"the amount to be paid is"<<Trooms;
            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"rooms are remaining";
            }
            break;
            
            //pasta
            
            case 2: 
            cout<<"enter the number of pastas you want";
            cin>>quant;
            if(Qpasta-Spasta >=quant)
            {
                Spasta=Spasta+quant;
                Tpasta=Tpasta+(quant*200);
                cout<<"\n\n\t\t"<<quant<<"pasta is ordered!";
                cout<<"the amount to be paid is"<<Tpasta;
            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"pastas are remaining";
            }
            break;
            
            //burger
            
            case 3: 
            cout<<"enter the number of burgers you want";
            cin>>quant;
            if(Qburger-Sburger >=quant)
            {
                Sburger=Sburger+quant;
                Tburger=Tburger+(quant*249);
                cout<<"\n\n\t\t"<<quant<<"Burgers is ordered!";
                cout<<"the amount to be paid is"<<Tburger;
            }
            else
            {
                cout<<"\n\tOnly"<<Qburger-Sburger<<"burgers are remaining";
            }
            break;
            
            //noodles
            
            case 4: 
            cout<<"enter the number of noodles you want";
            cin>>quant;
            if(Qnoodles-Snoodles >=quant)
            {
                Snoodles=Snoodles+quant;
                Tnoodles=Tnoodles+(quant*200);
                cout<<"\n\n\t\t"<<quant<<"Noodles is ordered!";
                cout<<"the amount to be paid is"<<Tnoodles;
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles are remaining";
            }
            break;
            
            //shakes
            
            case 5: 
            cout<<"enter the number of shakes you want";
            cin>>quant;
            if(Qshake-Sshake >=quant)
            {
                Sshake=Sshake+quant;
                Tshake=Tshake+(quant*200);
                cout<<"\n\n\t\t"<<quant<<"shake is ordered!";
                cout<<"the amount to be paid is"<<Tshake;
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<"shakes are remaining";
            }
            break;
            
            //chicken-roll
            
            case 6: 
            cout<<"enter the number of chicken-roll you want";
            cin>>quant;
            if(Qchicken-Schicken >=quant)
            {
                Schicken=Schicken+quant;
                Tchicken=Tchicken+(quant*200);
                cout<<"\n\n\t\t"<<quant<<"chicken-roll is ordered";
                cout<<"the amount to be paid is"<<Tchicken;
            }
            else
            {
                cout<<"\n\tOnly"<<Qchicken-Schicken<<"chicken-roll are remaining";
            }
            break;
            
            //Information
            
            case 7:
            cout<<"\n\n\tDetails of sales and collection";
            cout<<"\n\n Number of rooms we had :"<<Qrooms;
            cout<<"\n\n Number of rooms that we sold :"<<Srooms;
            cout<<"\n\n Number of rooms remaining :"<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection of the day :"<<Trooms;
            
            //pastas
            
            cout<<"\n\n Number of pastas we had :"<<Qpasta;
            cout<<"\n\n Number of pastas that we sold :"<<Spasta;
            cout<<"\n\n Number of pastas remaining :"<<Qpasta-Spasta;
            cout<<"\n\n Total pastas collection of the day :"<<Tpasta;
            
            //burgers
            
            cout<<"\n\n Number of burgers we had :"<<Qburger;
            cout<<"\n\n Number of burgers that we sold :"<<Sburger;
            cout<<"\n\n Number of burgers remaining :"<<Qburger-Sburger;
            cout<<"\n\n Total burger collection of the day :"<<Tburger;
            
            //noodles
            
            cout<<"\n\n Number of Noodles we had :"<<Qnoodles;
            cout<<"\n\n Number of Noodles that we sold :"<<Snoodles;
            cout<<"\n\n Number of Noodles remaining :"<<Qnoodles-Snoodles;
            cout<<"\n\n Total Noodles collection of the day :"<<Tnoodles;
            
            //shakes
            
            cout<<"\n\n Number of shakes we had :"<<Qshake;
            cout<<"\n\n Number of shakes that we sold :"<<Sshake;
            cout<<"\n\n Number of shakes remaining :"<<Qshake-Sshake;
            cout<<"\n\n Total shakes collection of the day :"<<Tshake;
            
            //chicken-roll
            
            cout<<"\n\n Number of chicken-roll we had :"<<Qchicken;
            cout<<"\n\n Number of chicken-roll that we sold :"<<Schicken;
            cout<<"\n\n Number of chicken-roll remaining :"<<Qchicken-Schicken;
            cout<<"\n\n Total chicken-roll collection of the day :"<<Tchicken;
            
            cout<<"\n\nTOTAL COLLECTIONS ON FOOD ITEMS :₹"<<Tpasta+Tburger+Tnoodles+Tshake+Tchicken;
            break;
            
            case 8:
                exit(0);
                break;
            case 9:
                Qrooms=0;Qpasta=0;Qburger=0;Qnoodles=0;Qshake=0;Qchicken=0;
                //food items solved
                Srooms=0;Spasta=0;Sburger=0;Snoodles=0;Sshake=0;Schicken=0;
                //total price of items
                Trooms=0;Tpasta=0;Tburger=0;Tnoodles=0;Tshake=0;Tchicken=0;
                cout<<"successful👍";
                break;
                
            default:
                cout<<"\n PLease select the numbers mentioned above!";
            
    }
    goto m;
    
    cout<<"a";
    return 0;
}