
//src guarda el contenido en un archivo falta declarar 
int read;
while(src!=null)
{
  src=src.replace(" ", "");
  //write to file (c)Chunkun
  for(int i=28;i<src.length();i+=2)
  {
    read=Integer.parseInt(src.substring(i,i+2),16);  //reading hex pair
    int temp=read;
    //write to file on case
    switch(temp){
      case '00':
                //write to file "HALT"
      case '01':
                //write to file "PRTCR"
      case '02':
                //write to file "PRTC"
      case '03':
                //write to file "PRTI"
      case '04':
                //write to file "PRTF"
      case '05':
                //write to file "PRTD"
      case '06':
                //write to file "PUSHC"
      case '07':
                //write to file "PUSHI"
      case '08':
                //write to file "PUSHF"
      case '09':
                //write to file "PUSHD"
      case '0A':
                //write to file "PUSHS"
      case '0B':
                //write to file "PUSHAC"
      case '0C':
                //write to file "PUSHAI"
      case '0D':
                //write to file "PUSHAF"
      case '0F':
                //write to file "PUSHAD"
      case '10':
                //write to file "PUSHAS"
      case '11':
                //write to file "PUSHKC"
      case '12':
                //write to file "PUSHKI"
      case '13':
                //write to file "PUSHKF"
      case '14':
                //write to file "PUSHKD"
      case '15':
                //write to file "PUSHKS"
      case '16':
                //write to file "POPC"
      case '17':
                //write to file "POPI"
      case '18':
                //write to file "POPF"
      case '19':
                //write to file "POPD"
      case '1A':
                //write to file "POPS"
      case '1B':
                //write to file "POPX"
      case '1C':
                 //write to file "POPAI"
      case '1D':
                //write to file "POPAF"
      case '1E':
                 //write to file "POPAD"
      case '1F':
                //write to file "POPAS"
      case '20':
                //write to file "RDC"
      case '21':
                //write to file "RDI"
      case '22':
                //write to file "RDF"
      case '23':
                //write to file "RDD"
      case '24':
                //write to file "RDS"
      case '25':
                //write to file "RDAC"
      case '26':
                //write to file "RDAI"
      case '27':
                //write to file "RDAF"
      case '28':
                //write to file "RDAD"
      case '29':
                //write to file "RDAS"
      case '2A':
                //write to file "JMP"
      case '2B':
                //write to file "JMPEQ"
      case '2C':
                //write to file "JMPNE"
      case '2D':
                //write to file "JMPGT"
      case '2E':
                //write to file "JMPGE"
      case '2F':
                //write to file "JMPLT"
      case '30':
                //write to file "JMPLE"
      case '31':
                //write to file "STX"
      case '32':
                //write to file "STKX"
      case '33':
                //write to file "INC"
      case '34':
                //write to file "DEC"
      case '35':
                //write to file "ADD"
      case '36':
                //write to file "SUB"
      case '37':
                //write to file "MUL"
      case '38':
                //write to file "DIV"
      case '39':
                //write to file "MOD"
      case '3A':
                //write to file "CMP"
      case default;
    }


  }



}