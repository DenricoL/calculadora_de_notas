function calcularNota() {
    let N1 = parseFloat(document.getElementById("n1").value);
    let N2 = parseFloat(document.getElementById("n2").value);
    let resultado = document.getElementById("resultado");

    if (isNaN(N1) || isNaN(N2)) {
        resultado.innerHTML = "Por favor, insira valores válidos.";
        resultado.style.color = "red";
        return;
    }

    let N3 = (12 - N1 * 0.3) / 0.85 - N2;
    resultado.innerHTML = `Nota necessária para média 6: <strong>${N3.toFixed(1)}</strong>`;
    if (N3 <= 5)
    resultado.style.color = "green";
    else if (N3 > 5 && N3 < 10)
    resultado.style.color = "#8a2101"
    else
    resultado.style.color = "red";
}

function limparCampos() {
    document.getElementById("n1").value = "";
    document.getElementById("n2").value = "";
    document.getElementById("resultado").innerHTML = "";
}