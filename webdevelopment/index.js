// 1 ways for printing in js
// console.log("hello world");  //for printing
// document.write("hello deepak");
// alert("me");   //for displaying message

// 2. javascript console api
// console.log("helloworld");
// console.warn("this is a warning");
// console.error("this is an error");

// 3 js variables -  container to store data values

/*
for 
multiline
Comment
*/

// var number1= 34;
// var  number2= 56;
// // console.log(number1 + number2);

// // 4 data type in javascript

// // number
// var num1=88;
// var num2=90.8;

// // string
// var str1 = "this is a string  ";
// var str2 = 'this is also a string';

// // object
// var marks={
//     ravi: 34,
//     shubham: 44,
//     deepak:90
// }

// // console.log(marks);

// // bollean
// var a= true;
// var b= false;
// // console.log(a);

// var und;   //its is undefined
// // console.log(und);

// var n=null; //its null

// // 2 type of data type
// // primitive -- undefind , null, number, string, boolean, symbol and reference data type-- array and object

// var arr=[1,2,"deepak",3,4];
// // console.log(arr);

// var a=34;
// var b= 56;
// console.log("the sum of a and b is ", a+b); //arithmatic operator

// // assignment
// var c=b ;
// c+=2;
// console.log(c);  //58

// // comparison operator
// var x=5;
// var y=0;
// console.log(x==y);

// // logical operator

// console.log(true && true)
// console.log(true && false)

// // logical not 
// console.log(!true)

// // functionnn
// function avg(a,b){
//     return (a+b)/2;
    
//     // dry-dont repeat your self
// }
// c1=avg(4,5);
// c2=avg(14,4);
// // console.log(c1,c2)

// // conditional in javasscript
// // ifelse and else if
// var age=5;
// // if(age>18){
// //     console.log('you can drink water');
// // }
// // else if(age>=5){
// //     console.log('go away');
// // }
// // else{
// //     console.log('you cannot drink')

// // }

// // for each
// var arr =[1,2,3,4,5,6,7]
// // arr.forEach(function(element){
// //     console.log(element);
// // })

// // for(var i=0; i<arr.length;i++){
// //     if(i==2){
// //         // break;
// //         continue;
// //     }
// //     console.log(arr[i]);
// // }

// // let j=0; 
// // while(j<arr.length){
// //     console.log(arr[j]);
// //     j++;
// // }


// // do{
// //     console.log(arr[j]);
// //     j++;
// // }while(j<arr.length);

// let myarr=["facn","camera",34, 14, true];
// // array methodss
// // console.log(myarr.length);
// myarr.pop();
// // console.log(myarr);

// myarr.push("deepak")
// // console.log(myarr)

// myarr.shift()     //remove first element of the arr
// // console.log(myarr)


// // DOM Manipulation 
// let elem= document.getElementById('click');
// // console.log(elem)

// let elem1= document.getElementsByClassName('container');
// console.log(elem1);
// // elem1[0].style.background= "yellow";
// elem1[1].style.background= "red";
// // elem[0].classList.add("text-success") //make class
// // console.log(elem.iner)

// tn=document.getElementsByTagName('div');
// console.log(tn);

// // createdElement= document.createdElement('p');
// // createdElement.innerText="this is the best para";
// // tn[0].appendChild(createdElement);

// // select using query
// sel = document.querySelectorAll('.container')
// console.log(sel);

// event
// function clicked(){
//     console.log('the button was clicked');
// }

// window.onload=function(){
//     console.log('the document was loaded')
// }

// firstContainer.addEventListener('mouseover',function(){
//     console.log("mouse on container")

// })

// arrow function

// sum= (a,b)=>{
//     return a+b;
// }


// logkaro=()=>{
//     document.querySelectorAll('.container')[1].innerHTML="<b> set interval fired</b>"
//     console.log("i am your log")
// }
// settimeout and setinterval
// setTimeout(logkaro,2000);
// use clearInterval(clr)/clearTimeout (clr) to cancel setInterval/setTimeout
// clr=setInterval(logkaro,1000)

// local storage of setitem

// localStorage.setItem('name','deepak')
// localStorage
// localStorage.getItem('name')
// localStorage.clear() 

// json

// obj={name: "deepak", length: 1, a:{"this":"thisthat"}}
// jso=JSON.stringify(obj);
// console.log(typeof jso)
// console.log(jso)
// parsed=JSON.parse(`{"name":"deepak","length":1,"a":{"this":"\"thisthat\""}}`)
// console.log(parsed)

// backticks- template literals
a=34;
console.log(`this is my${a}`)



