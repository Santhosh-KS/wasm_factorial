function loadFile(event) {
  var image = document.getElementById('output');
  image.src = URL.createObjectURL(event.target.files[0]);
  var image1 = document.getElementById('output1');
  image1.src = URL.createObjectURL(event.target.files[0]);
};

