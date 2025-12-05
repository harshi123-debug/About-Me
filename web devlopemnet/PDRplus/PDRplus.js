document.getElementById('orderForm').addEventListener('submit', function(e){
    e.preventDefault();
    alert('Thank you! Your order request has been noted. (Backend connection will be added later.)');
    this.reset();
});
