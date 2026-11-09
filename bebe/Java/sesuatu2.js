const operation = ['/','*','-','+']
function hitung(x,lambang,y) {
    if (lambang === operation[0]){
        console.log(x/y)
    } else if (lambang === operation[1]) {
        console.log(x*y)
    }   else if (lambang === operation[2]) {
            console.log(x-y)
        } else if (lambang === operation[3]) {
            console.log(x+y)
        } else {
            console.log('ngawur')
        }
    }
    hitung(15,operation[1],30);   