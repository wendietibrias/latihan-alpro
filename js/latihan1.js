//biner to decimal

function binerToDecimal(biner) {
    if(typeof biner === 'string') {
       let result=0;
         for(let i = 0; i < biner.length; i++) {
             result += Number(biner[i]) * (2**(biner.length-(i+1)));
         }

         return result;
    }

    return 'invalid type';
}


function decimalToBiner(decimal) {
    let previousResult = decimal;
    let result = '';

    do {
       result = (previousResult%2).toString() + result;
       previousResult = Math.floor(previousResult / 2);
    } while(previousResult > 0);

     console.log(result);

}

function decimalToOctal(decimal) {
    let previousResult = decimal;
    let result = '';

    do {
      result = (previousResult%8).toString() + result;
      previousResult = Math.floor(previousResult) / 8;

    } while(previousResult > 0);

    console.log(result);
}

function decimalToHexa(decimal) {
   let finalResult = '';
   let result = decimal;
  
   do {
     let moduloResult = result % 16;
     result = Math.floor(result / 16);
     
     
     switch(moduloResult) {
       case 15:
          finalResult = 'F' + finalResult;
         break;
         
         case 14:
           finalResult = 'E' + finalResult;
         break;
         
         case 13:
           finalResult = 'D' + finalResult;
         break;
         
         case 12:
           finalResult = 'C' + finalResult;
         break;
         
         case 11: 
           finalResult = 'B' + finalResult;
         break;
         
         case 10: 
           finalResult = 'A' + finalResult;
         break;
         
         default:
           finalResult = moduloResult.toString() + finalResult;
     }
   } while(result > 0);
  
  console.log(finalResult);
}

decimalToHexa(600);