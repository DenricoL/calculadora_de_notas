function calcularNota() {
    let N1 = parseFloat(document.getElementById("n1").value);
    let N2 = parseFloat(document.getElementById("n2").value);
    let resultado = document.getElementById("resultado");
    let container = document.querySelector(".container");

    if (isNaN(N1) || isNaN(N2)) {
        resultado.innerHTML = "Por favor, insira valores válidos.";
        resultado.style.color = "red";
        return;
    }

    let N3 = (12 - N1 * 0.3) / 0.85 - N2;
    if (N3 > 10) 
    {
        let N3 = (10 - N1 * 0.3) / 0.85 - N2;
        if (N3 > 10)
        {
            resultado.innerHTML = `Reprovado.`;
            container.classList.remove("good");
            container.classList.remove("mid");
            container.classList.add("bad");
            resultado.style.color = "red";
        }
        else
            resultado.innerHTML = `Nota necessária pra ir pra IFA: <strong>${N3.toFixed(2)}</strong>`;
            resultado.style.color = "red";
            container.classList.remove("good");
            container.classList.remove("mid");
            container.classList.add("bad");
    }    
    else
    {
        resultado.innerHTML = `Nota necessária para média final ser 6: <strong>${N3.toFixed(2)}</strong>`;
        container.classList.remove("bad");
        if (N3 <= 5)
        {
            resultado.style.color = "green";
            container.classList.add("good");
        }
        else if (N3 > 7.5)
        {
            resultado.style.color = "#DD7E01" 
            container.classList.add("bad");
            container.classList.add("good");
            container.classList.add("mid");

        }
        else
        {
            resultado.style.color = "#006ba1"
            container.classList.remove("mid");
            container.classList.remove("good");
            container.classList.remove("bad");
        }
    }
}

function limparCampos() {
    document.getElementById("n1").value = "";
    document.getElementById("n2").value = "";
    document.getElementById("resultado").innerHTML = "";
    document.querySelector(".container").classList.remove("bad");
    document.querySelector(".container").classList.remove("good");
}