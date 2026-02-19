const track = document.querySelector('.carousel-track');
const nextBtn = document.querySelector('.next');
const prevBtn = document.querySelector('.prev');

let index = 0;

nextBtn.addEventListener('click', () => {
    index++;
    if (index > 3) {
        index = 0;
    }
    track.style.transform = `translateX(-${index * 100}%)`;
});

prevBtn.addEventListener('click', () => {
    index--;
    if (index < 0) {
        index = 3;
    }
    track.style.transform = `translateX(-${index * 100}%)`;
});
function nextSlide() {
    index++;
    if (index > 3) {
        index = 0;
    }
    track.style.transform = `translateX(-${index * 100}%)`;
}

function prevSlide() {
    index--;
    if (index < 0) {
        index = 3;
    }
    track.style.transform = `translateX(-${index * 100}%)`;
}

nextBtn.addEventListener('click', nextSlide);
prevBtn.addEventListener('click', prevSlide);

/* 🔥 Aqui está o cronômetro automático */
setInterval(nextSlide, 3000); // 3000ms = 3 segundos
