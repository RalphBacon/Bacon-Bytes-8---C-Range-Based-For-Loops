# Bacon Bytes #8: C++ Range-Based For Loops
### Let the compiler help you iterate through arrays

![Thumbnail (Phone)](https://user-images.githubusercontent.com/20911308/168091742-d73e58c7-29fc-4fb2-88f8-b36b64a244a7.jpg)  
Video Link: https://youtu.be/qw7281Ab-QI   

We have all written a standard ```for``` loop to iterate through an array like this:
```
char* myArray[] = {"John, "James", "Janet, "Julia", "Jeremy"};
for (uint8_t cnt=0; cnt<5; cnt++) {

  // do stuff with myArray[cnt]

}
```
but there is a 'better' way, where we let the compiler work out the bounds of the array, and the variable type. Very easy.

#### Why bother?   
Basically, it means less risk that you have misidentified the number of elements in the array (causing a potential code crash or, at the very least, some nonsense results) and it makes the code much more readable.

► Useful or interesting video? You can support my channel:  
Buy Me A Coffee! https://www.buymeacoffee.com/ralphbacon 

► List of all my videos
(Special thanks to Michael Kurt Vogel for compiling this)  
http://bit.ly/YouTubeVideoList-RalphBacon

► If you like this video please give it a thumbs up, share it and if you're not already subscribed please consider doing so and joining me on my Arduinite (and other μControllers) journey

My channel, GitHub and blog are here:  
\------------------------------------------------------------------  
• https://www.youtube.com/RalphBacon  
• https://ralphbacon.blog  
• https://github.com/RalphBacon  
• https://buymeacoffee.com/ralphbacon  
\------------------------------------------------------------------





