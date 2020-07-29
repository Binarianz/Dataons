'use strict'

window.addEventListener('load', function () {
    const frameRange = document.getElementById('frameRange')
    const frameImage = document.getElementById('frameImage')
    const playButton = document.getElementById('playButton')
    const stopButton = document.getElementById('stopButton')

    let currentFrame = 1
    let isPlaying = false

    function showFrame () {
        const fileName = 'image/img' + (currentFrame + '').padStart(4, '0') + '-min.jpg'
        frameImage.setAttribute('src', fileName)

        frameRange.value = currentFrame
    }

    function play () {
        isPlaying = true
        frameRange.disabled = true
        showFrame()

        setTimeout(function () {
            if (isPlaying) {
                currentFrame = (currentFrame < 36 ? currentFrame + 1 : 1)
                play()
            }
        }, 50)
    }

    function stop () {
        isPlaying = false
        frameRange.disabled = false
    }

    playButton.addEventListener('click', play)
    stopButton.addEventListener('click', stop)

    frameRange.addEventListener('input', function (event) {
        currentFrame = parseInt(event.target.value)
        showFrame()
    })
})
