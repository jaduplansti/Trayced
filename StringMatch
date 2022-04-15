##StringsMatch Strings by sourceware##

Blue='\033[0;34m'
RED='\033[0;31m'
Green='\033[0;32m' 
loading()
{
echo -e "$Green Stringmatcher is starting."
clear
 sleep 1
clear
echo -e "$Green Stringmatcher is starting.."
 sleep 1
clear
echo -e "$Green Stringmatcher is starting..."
 sleep 1
clear
echo -e "$Green Stringmatcher is starting."
 sleep 1 
clear
echo -e "$Green Stringmatcher is starting.."
 sleep 1
clear
}
starto()
{
 echo -e "$Blue Input The Directory Of The  Target:"
  read dir 
 sleep 1 
 clear 
  echo -e "$RED Run Strings? (y/n)"
   read input1
   sleep 2 
clear
 if  [ $input1 == y -o $input1 == Y ] 
  then 
     stringso 
  elif [ $input1 == n -o $input1 == N ] 
 then 
   exit
   else
 echo -e  "$RED Invalid Option"
    starto
 fi        
}



stringso()
{
rm stringlog
 strings $dir | tee stringlog
if  cat stringlog.txt; then
  echo -e "$Blue Successfully Stored"
    clear
else 
  echo -e "$RED Wrong Directory Or File Not Exist"
    sleep 2
     starto
fi

}

Checks() #This is where the checks happens#
{
 if  grep -q   wearedevs stringlog
then
  echo -e "$RED Roblox Exploit"
fi
if  grep -q  GNU stringlog 
then
  echo -e "$RED Linux"
fi
if  grep -q  127.0.0 stringlog 
then
  echo -e "$RED Starts a local connection"
fi
if  grep -q    avast stringlog 
then
  echo -e "$RED Scanned And Sanitized by Avg/Avast"
fi
if  grep -q   www. stringlog 
then
  echo -e "$RED Makes A Connection With a  Link or its just a string"
fi
if  grep -q   PHOTOSHOP stringlog 
then
  echo -e "$RED  its Probably Saved or Edited on Photoshop "
fi
if  grep -q  .exe stringlog 
then
  echo -e "$RED Executable File"
fi
if  grep -q   dll stringlog 
then
  echo -e "$RED a dll"
fi
if grep -q   youtube stringlog
then
  echo -e "$RED  Ytmp4 Converter or Links to a youtube link "
fi
if  grep -q   HKEY stringlog 
then
  echo -e "$RED Regitry Read/Write"
fi
if  grep -q   usage stringlog 
then
  echo -e "$RED tool"
fi
if   grep -q   gcc stringlog 
then
  echo -e "$RED C!"
fi
if  grep -q   5001 stringlog
then
  echo -e "$RED Common Port"
fi
if grep -q  ".NET Framework" stringlog
then 
 echo -e "$RED C# or CIL or IL"
fi
if grep -q DllInjector stringlog 
then 
   echo -e  "$RED Exploit or Some How Injects DLL"
fi
  }

loading
starto
Checks
