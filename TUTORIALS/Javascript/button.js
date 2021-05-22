var btn = document.createElement("Button");

btn.innerHTML = "0";
btn.id = "btn";
btn.className = "btnClass";

document.body.appendChild(btn);

btn.onclick = function() {
  btn.innerHTML++;
}
